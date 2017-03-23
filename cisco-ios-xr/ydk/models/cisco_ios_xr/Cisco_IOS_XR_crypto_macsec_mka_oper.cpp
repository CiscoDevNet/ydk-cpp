
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

Macsec::Macsec()
    :
    mka(std::make_shared<Macsec::Mka>())
{
    mka->parent = this;
    children["mka"] = mka;

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-mka-oper";
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    return (mka !=  nullptr && mka->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(operation)
	|| (mka !=  nullptr && mka->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec";

    return path_buffer.str();

}

EntityPath Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mka")
    {
        if(mka != nullptr)
        {
            children["mka"] = mka;
        }
        else
        {
            mka = std::make_shared<Macsec::Mka>();
            mka->parent = this;
            children["mka"] = mka;
        }
        return children.at("mka");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::get_children()
{
    if(children.find("mka") == children.end())
    {
        if(mka != nullptr)
        {
            children["mka"] = mka;
        }
    }

    return children;
}

void Macsec::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Macsec::clone_ptr() const
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

Macsec::Mka::Mka()
    :
    interfaces(std::make_shared<Macsec::Mka::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "mka"; yang_parent_name = "macsec";
}

Macsec::Mka::~Mka()
{
}

bool Macsec::Mka::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Macsec::Mka::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Macsec::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka";

    return path_buffer.str();

}

EntityPath Macsec::Mka::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Macsec::Mka::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void Macsec::Mka::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Mka::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mka";
}

Macsec::Mka::Interfaces::~Interfaces()
{
}

bool Macsec::Mka::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Mka::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Mka::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/mka/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Mka::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Macsec::Mka::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Mka::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    session(std::make_shared<Macsec::Mka::Interfaces::Interface::Session>())
{
    session->parent = this;
    children["session"] = session;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Macsec::Mka::Interfaces::Interface::~Interface()
{
}

bool Macsec::Mka::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Macsec::Mka::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (session !=  nullptr && session->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/mka/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<Macsec::Mka::Interfaces::Interface::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    return children;
}

void Macsec::Mka::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Session()
    :
    session_summary(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary>())
	,vp(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp>())
{
    session_summary->parent = this;
    children["session-summary"] = session_summary;

    vp->parent = this;
    children["vp"] = vp;

    yang_name = "session"; yang_parent_name = "interface";
}

Macsec::Mka::Interfaces::Interface::Session::~Session()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::has_data() const
{
    for (std::size_t index=0; index<ca.size(); index++)
    {
        if(ca[index]->has_data())
            return true;
    }
    return (session_summary !=  nullptr && session_summary->has_data())
	|| (vp !=  nullptr && vp->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::has_operation() const
{
    for (std::size_t index=0; index<ca.size(); index++)
    {
        if(ca[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (session_summary !=  nullptr && session_summary->has_operation())
	|| (vp !=  nullptr && vp->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ca")
    {
        for(auto const & c : ca)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca>();
        c->parent = this;
        ca.push_back(std::move(c));
        children[segment_path] = ca.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-summary")
    {
        if(session_summary != nullptr)
        {
            children["session-summary"] = session_summary;
        }
        else
        {
            session_summary = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary>();
            session_summary->parent = this;
            children["session-summary"] = session_summary;
        }
        return children.at("session-summary");
    }

    if(child_yang_name == "vp")
    {
        if(vp != nullptr)
        {
            children["vp"] = vp;
        }
        else
        {
            vp = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp>();
            vp->parent = this;
            children["vp"] = vp;
        }
        return children.at("vp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::get_children()
{
    for (auto const & c : ca)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-summary") == children.end())
    {
        if(session_summary != nullptr)
        {
            children["session-summary"] = session_summary;
        }
    }

    if(children.find("vp") == children.end())
    {
        if(vp != nullptr)
        {
            children["vp"] = vp;
        }
    }

    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::SessionSummary()
    :
    algo_agility{YType::uint32, "algo-agility"},
    capability{YType::uint32, "capability"},
    cipher_str{YType::str, "cipher-str"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    delay_protection{YType::boolean, "delay-protection"},
    include_icv_indicator{YType::boolean, "include-icv-indicator"},
    inherited_policy{YType::boolean, "inherited-policy"},
    interface_name{YType::str, "interface-name"},
    mac_sec_desired{YType::boolean, "mac-sec-desired"},
    my_mac{YType::str, "my-mac"},
    policy{YType::str, "policy"},
    priority{YType::uint32, "priority"},
    replay_protect{YType::boolean, "replay-protect"},
    window_size{YType::uint32, "window-size"}
    	,
    inner_tag(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag>())
	,outer_tag(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag>())
{
    inner_tag->parent = this;
    children["inner-tag"] = inner_tag;

    outer_tag->parent = this;
    children["outer-tag"] = outer_tag;

    yang_name = "session-summary"; yang_parent_name = "session";
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::~SessionSummary()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::has_data() const
{
    return algo_agility.is_set
	|| capability.is_set
	|| cipher_str.is_set
	|| confidentiality_offset.is_set
	|| delay_protection.is_set
	|| include_icv_indicator.is_set
	|| inherited_policy.is_set
	|| interface_name.is_set
	|| mac_sec_desired.is_set
	|| my_mac.is_set
	|| policy.is_set
	|| priority.is_set
	|| replay_protect.is_set
	|| window_size.is_set
	|| (inner_tag !=  nullptr && inner_tag->has_data())
	|| (outer_tag !=  nullptr && outer_tag->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(algo_agility.operation)
	|| is_set(capability.operation)
	|| is_set(cipher_str.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(delay_protection.operation)
	|| is_set(include_icv_indicator.operation)
	|| is_set(inherited_policy.operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_sec_desired.operation)
	|| is_set(my_mac.operation)
	|| is_set(policy.operation)
	|| is_set(priority.operation)
	|| is_set(replay_protect.operation)
	|| is_set(window_size.operation)
	|| (inner_tag !=  nullptr && inner_tag->has_operation())
	|| (outer_tag !=  nullptr && outer_tag->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-summary";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionSummary' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algo_agility.is_set || is_set(algo_agility.operation)) leaf_name_data.push_back(algo_agility.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (cipher_str.is_set || is_set(cipher_str.operation)) leaf_name_data.push_back(cipher_str.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (delay_protection.is_set || is_set(delay_protection.operation)) leaf_name_data.push_back(delay_protection.get_name_leafdata());
    if (include_icv_indicator.is_set || is_set(include_icv_indicator.operation)) leaf_name_data.push_back(include_icv_indicator.get_name_leafdata());
    if (inherited_policy.is_set || is_set(inherited_policy.operation)) leaf_name_data.push_back(inherited_policy.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_sec_desired.is_set || is_set(mac_sec_desired.operation)) leaf_name_data.push_back(mac_sec_desired.get_name_leafdata());
    if (my_mac.is_set || is_set(my_mac.operation)) leaf_name_data.push_back(my_mac.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (replay_protect.is_set || is_set(replay_protect.operation)) leaf_name_data.push_back(replay_protect.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inner-tag")
    {
        if(inner_tag != nullptr)
        {
            children["inner-tag"] = inner_tag;
        }
        else
        {
            inner_tag = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag>();
            inner_tag->parent = this;
            children["inner-tag"] = inner_tag;
        }
        return children.at("inner-tag");
    }

    if(child_yang_name == "outer-tag")
    {
        if(outer_tag != nullptr)
        {
            children["outer-tag"] = outer_tag;
        }
        else
        {
            outer_tag = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag>();
            outer_tag->parent = this;
            children["outer-tag"] = outer_tag;
        }
        return children.at("outer-tag");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_children()
{
    if(children.find("inner-tag") == children.end())
    {
        if(inner_tag != nullptr)
        {
            children["inner-tag"] = inner_tag;
        }
    }

    if(children.find("outer-tag") == children.end())
    {
        if(outer_tag != nullptr)
        {
            children["outer-tag"] = outer_tag;
        }
    }

    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algo-agility")
    {
        algo_agility = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "cipher-str")
    {
        cipher_str = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "delay-protection")
    {
        delay_protection = value;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator = value;
    }
    if(value_path == "inherited-policy")
    {
        inherited_policy = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-sec-desired")
    {
        mac_sec_desired = value;
    }
    if(value_path == "my-mac")
    {
        my_mac = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "replay-protect")
    {
        replay_protect = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::OuterTag()
    :
    cfi{YType::uint8, "cfi"},
    etype{YType::uint16, "etype"},
    priority{YType::uint8, "priority"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "outer-tag"; yang_parent_name = "session-summary";
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::~OuterTag()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::has_data() const
{
    return cfi.is_set
	|| etype.is_set
	|| priority.is_set
	|| vlan_id.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::has_operation() const
{
    return is_set(operation)
	|| is_set(cfi.operation)
	|| is_set(etype.operation)
	|| is_set(priority.operation)
	|| is_set(vlan_id.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-tag";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OuterTag' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfi.is_set || is_set(cfi.operation)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (etype.is_set || is_set(etype.operation)) leaf_name_data.push_back(etype.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfi")
    {
        cfi = value;
    }
    if(value_path == "etype")
    {
        etype = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::InnerTag()
    :
    cfi{YType::uint8, "cfi"},
    etype{YType::uint16, "etype"},
    priority{YType::uint8, "priority"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "inner-tag"; yang_parent_name = "session-summary";
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::~InnerTag()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::has_data() const
{
    return cfi.is_set
	|| etype.is_set
	|| priority.is_set
	|| vlan_id.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::has_operation() const
{
    return is_set(operation)
	|| is_set(cfi.operation)
	|| is_set(etype.operation)
	|| is_set(priority.operation)
	|| is_set(vlan_id.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-tag";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerTag' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfi.is_set || is_set(cfi.operation)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (etype.is_set || is_set(etype.operation)) leaf_name_data.push_back(etype.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfi")
    {
        cfi = value;
    }
    if(value_path == "etype")
    {
        etype = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Vp::Vp()
    :
    cipher_suite{YType::uint32, "cipher-suite"},
    latest_an{YType::uint32, "latest-an"},
    latest_ki{YType::str, "latest-ki"},
    latest_kn{YType::uint32, "latest-kn"},
    latest_rx{YType::boolean, "latest-rx"},
    latest_tx{YType::boolean, "latest-tx"},
    my_sci{YType::str, "my-sci"},
    old_an{YType::uint32, "old-an"},
    old_ki{YType::str, "old-ki"},
    old_kn{YType::uint32, "old-kn"},
    old_rx{YType::boolean, "old-rx"},
    old_tx{YType::boolean, "old-tx"},
    retire_time{YType::uint32, "retire-time"},
    ssci{YType::uint32, "ssci"},
    time_to_sak_rekey{YType::str, "time-to-sak-rekey"},
    virtual_port_id{YType::uint32, "virtual-port-id"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "vp"; yang_parent_name = "session";
}

Macsec::Mka::Interfaces::Interface::Session::Vp::~Vp()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::has_data() const
{
    return cipher_suite.is_set
	|| latest_an.is_set
	|| latest_ki.is_set
	|| latest_kn.is_set
	|| latest_rx.is_set
	|| latest_tx.is_set
	|| my_sci.is_set
	|| old_an.is_set
	|| old_ki.is_set
	|| old_kn.is_set
	|| old_rx.is_set
	|| old_tx.is_set
	|| retire_time.is_set
	|| ssci.is_set
	|| time_to_sak_rekey.is_set
	|| virtual_port_id.is_set
	|| wait_time.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::has_operation() const
{
    return is_set(operation)
	|| is_set(cipher_suite.operation)
	|| is_set(latest_an.operation)
	|| is_set(latest_ki.operation)
	|| is_set(latest_kn.operation)
	|| is_set(latest_rx.operation)
	|| is_set(latest_tx.operation)
	|| is_set(my_sci.operation)
	|| is_set(old_an.operation)
	|| is_set(old_ki.operation)
	|| is_set(old_kn.operation)
	|| is_set(old_rx.operation)
	|| is_set(old_tx.operation)
	|| is_set(retire_time.operation)
	|| is_set(ssci.operation)
	|| is_set(time_to_sak_rekey.operation)
	|| is_set(virtual_port_id.operation)
	|| is_set(wait_time.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::Vp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vp' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (latest_an.is_set || is_set(latest_an.operation)) leaf_name_data.push_back(latest_an.get_name_leafdata());
    if (latest_ki.is_set || is_set(latest_ki.operation)) leaf_name_data.push_back(latest_ki.get_name_leafdata());
    if (latest_kn.is_set || is_set(latest_kn.operation)) leaf_name_data.push_back(latest_kn.get_name_leafdata());
    if (latest_rx.is_set || is_set(latest_rx.operation)) leaf_name_data.push_back(latest_rx.get_name_leafdata());
    if (latest_tx.is_set || is_set(latest_tx.operation)) leaf_name_data.push_back(latest_tx.get_name_leafdata());
    if (my_sci.is_set || is_set(my_sci.operation)) leaf_name_data.push_back(my_sci.get_name_leafdata());
    if (old_an.is_set || is_set(old_an.operation)) leaf_name_data.push_back(old_an.get_name_leafdata());
    if (old_ki.is_set || is_set(old_ki.operation)) leaf_name_data.push_back(old_ki.get_name_leafdata());
    if (old_kn.is_set || is_set(old_kn.operation)) leaf_name_data.push_back(old_kn.get_name_leafdata());
    if (old_rx.is_set || is_set(old_rx.operation)) leaf_name_data.push_back(old_rx.get_name_leafdata());
    if (old_tx.is_set || is_set(old_tx.operation)) leaf_name_data.push_back(old_tx.get_name_leafdata());
    if (retire_time.is_set || is_set(retire_time.operation)) leaf_name_data.push_back(retire_time.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());
    if (time_to_sak_rekey.is_set || is_set(time_to_sak_rekey.operation)) leaf_name_data.push_back(time_to_sak_rekey.get_name_leafdata());
    if (virtual_port_id.is_set || is_set(virtual_port_id.operation)) leaf_name_data.push_back(virtual_port_id.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::Vp::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "latest-an")
    {
        latest_an = value;
    }
    if(value_path == "latest-ki")
    {
        latest_ki = value;
    }
    if(value_path == "latest-kn")
    {
        latest_kn = value;
    }
    if(value_path == "latest-rx")
    {
        latest_rx = value;
    }
    if(value_path == "latest-tx")
    {
        latest_tx = value;
    }
    if(value_path == "my-sci")
    {
        my_sci = value;
    }
    if(value_path == "old-an")
    {
        old_an = value;
    }
    if(value_path == "old-ki")
    {
        old_ki = value;
    }
    if(value_path == "old-kn")
    {
        old_kn = value;
    }
    if(value_path == "old-rx")
    {
        old_rx = value;
    }
    if(value_path == "old-tx")
    {
        old_tx = value;
    }
    if(value_path == "retire-time")
    {
        retire_time = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
    if(value_path == "time-to-sak-rekey")
    {
        time_to_sak_rekey = value;
    }
    if(value_path == "virtual-port-id")
    {
        virtual_port_id = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Ca::Ca()
    :
    authentication_mode{YType::str, "authentication-mode"},
    authenticator{YType::boolean, "authenticator"},
    ckn{YType::str, "ckn"},
    first_ca{YType::boolean, "first-ca"},
    is_key_server{YType::boolean, "is-key-server"},
    key_chain{YType::str, "key-chain"},
    my_mi{YType::str, "my-mi"},
    my_mn{YType::uint32, "my-mn"},
    num_live_peers{YType::uint32, "num-live-peers"},
    num_live_peers_responded{YType::uint32, "num-live-peers-responded"},
    peer_sci{YType::str, "peer-sci"},
    status{YType::uint32, "status"},
    status_description{YType::str, "status-description"}
{
    yang_name = "ca"; yang_parent_name = "session";
}

Macsec::Mka::Interfaces::Interface::Session::Ca::~Ca()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::has_data() const
{
    for (std::size_t index=0; index<dormant_peer.size(); index++)
    {
        if(dormant_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<live_peer.size(); index++)
    {
        if(live_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<potential_peer.size(); index++)
    {
        if(potential_peer[index]->has_data())
            return true;
    }
    return authentication_mode.is_set
	|| authenticator.is_set
	|| ckn.is_set
	|| first_ca.is_set
	|| is_key_server.is_set
	|| key_chain.is_set
	|| my_mi.is_set
	|| my_mn.is_set
	|| num_live_peers.is_set
	|| num_live_peers_responded.is_set
	|| peer_sci.is_set
	|| status.is_set
	|| status_description.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::has_operation() const
{
    for (std::size_t index=0; index<dormant_peer.size(); index++)
    {
        if(dormant_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<live_peer.size(); index++)
    {
        if(live_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<potential_peer.size(); index++)
    {
        if(potential_peer[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(authentication_mode.operation)
	|| is_set(authenticator.operation)
	|| is_set(ckn.operation)
	|| is_set(first_ca.operation)
	|| is_set(is_key_server.operation)
	|| is_set(key_chain.operation)
	|| is_set(my_mi.operation)
	|| is_set(my_mn.operation)
	|| is_set(num_live_peers.operation)
	|| is_set(num_live_peers_responded.operation)
	|| is_set(peer_sci.operation)
	|| is_set(status.operation)
	|| is_set(status_description.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::Ca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ca' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_mode.is_set || is_set(authentication_mode.operation)) leaf_name_data.push_back(authentication_mode.get_name_leafdata());
    if (authenticator.is_set || is_set(authenticator.operation)) leaf_name_data.push_back(authenticator.get_name_leafdata());
    if (ckn.is_set || is_set(ckn.operation)) leaf_name_data.push_back(ckn.get_name_leafdata());
    if (first_ca.is_set || is_set(first_ca.operation)) leaf_name_data.push_back(first_ca.get_name_leafdata());
    if (is_key_server.is_set || is_set(is_key_server.operation)) leaf_name_data.push_back(is_key_server.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (my_mi.is_set || is_set(my_mi.operation)) leaf_name_data.push_back(my_mi.get_name_leafdata());
    if (my_mn.is_set || is_set(my_mn.operation)) leaf_name_data.push_back(my_mn.get_name_leafdata());
    if (num_live_peers.is_set || is_set(num_live_peers.operation)) leaf_name_data.push_back(num_live_peers.get_name_leafdata());
    if (num_live_peers_responded.is_set || is_set(num_live_peers_responded.operation)) leaf_name_data.push_back(num_live_peers_responded.get_name_leafdata());
    if (peer_sci.is_set || is_set(peer_sci.operation)) leaf_name_data.push_back(peer_sci.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (status_description.is_set || is_set(status_description.operation)) leaf_name_data.push_back(status_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dormant-peer")
    {
        for(auto const & c : dormant_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer>();
        c->parent = this;
        dormant_peer.push_back(std::move(c));
        children[segment_path] = dormant_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "live-peer")
    {
        for(auto const & c : live_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer>();
        c->parent = this;
        live_peer.push_back(std::move(c));
        children[segment_path] = live_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "potential-peer")
    {
        for(auto const & c : potential_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer>();
        c->parent = this;
        potential_peer.push_back(std::move(c));
        children[segment_path] = potential_peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::Ca::get_children()
{
    for (auto const & c : dormant_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : live_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : potential_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-mode")
    {
        authentication_mode = value;
    }
    if(value_path == "authenticator")
    {
        authenticator = value;
    }
    if(value_path == "ckn")
    {
        ckn = value;
    }
    if(value_path == "first-ca")
    {
        first_ca = value;
    }
    if(value_path == "is-key-server")
    {
        is_key_server = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "my-mi")
    {
        my_mi = value;
    }
    if(value_path == "my-mn")
    {
        my_mn = value;
    }
    if(value_path == "num-live-peers")
    {
        num_live_peers = value;
    }
    if(value_path == "num-live-peers-responded")
    {
        num_live_peers_responded = value;
    }
    if(value_path == "peer-sci")
    {
        peer_sci = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "status-description")
    {
        status_description = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::LivePeer()
    :
    mi{YType::str, "mi"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    sci{YType::str, "sci"},
    ssci{YType::uint32, "ssci"}
{
    yang_name = "live-peer"; yang_parent_name = "ca";
}

Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::~LivePeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::has_data() const
{
    return mi.is_set
	|| mn.is_set
	|| priority.is_set
	|| sci.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::has_operation() const
{
    return is_set(operation)
	|| is_set(mi.operation)
	|| is_set(mn.operation)
	|| is_set(priority.operation)
	|| is_set(sci.operation)
	|| is_set(ssci.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "live-peer";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LivePeer' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.operation)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (mn.is_set || is_set(mn.operation)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi")
    {
        mi = value;
    }
    if(value_path == "mn")
    {
        mn = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::PotentialPeer()
    :
    mi{YType::str, "mi"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    sci{YType::str, "sci"},
    ssci{YType::uint32, "ssci"}
{
    yang_name = "potential-peer"; yang_parent_name = "ca";
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::~PotentialPeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::has_data() const
{
    return mi.is_set
	|| mn.is_set
	|| priority.is_set
	|| sci.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(mi.operation)
	|| is_set(mn.operation)
	|| is_set(priority.operation)
	|| is_set(sci.operation)
	|| is_set(ssci.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "potential-peer";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PotentialPeer' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.operation)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (mn.is_set || is_set(mn.operation)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi")
    {
        mi = value;
    }
    if(value_path == "mn")
    {
        mn = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
}

Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::DormantPeer()
    :
    mi{YType::str, "mi"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    sci{YType::str, "sci"},
    ssci{YType::uint32, "ssci"}
{
    yang_name = "dormant-peer"; yang_parent_name = "ca";
}

Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::~DormantPeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::has_data() const
{
    return mi.is_set
	|| mn.is_set
	|| priority.is_set
	|| sci.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(mi.operation)
	|| is_set(mn.operation)
	|| is_set(priority.operation)
	|| is_set(sci.operation)
	|| is_set(ssci.operation);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dormant-peer";

    return path_buffer.str();

}

EntityPath Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DormantPeer' in Cisco_IOS_XR_crypto_macsec_mka_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.operation)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (mn.is_set || is_set(mn.operation)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (sci.is_set || is_set(sci.operation)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.operation)) leaf_name_data.push_back(ssci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_children()
{
    return children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi")
    {
        mi = value;
    }
    if(value_path == "mn")
    {
        mn = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "sci")
    {
        sci = value;
    }
    if(value_path == "ssci")
    {
        ssci = value;
    }
}


}
}

