
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_82.hpp"
#include "Cisco_IOS_XE_native_83.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Backoff()
{
    yang_name = "backoff"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::~Backoff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff")
    {
        for(auto const & c : boff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff>();
        c->parent = this;
        boff.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff()
    :
    boff{YType::uint16, "boff"}
{
    yang_name = "boff"; yang_parent_name = "backoff";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::~Boff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_data() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_data())
            return true;
    }
    return boff.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_operation() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(boff.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff" <<"[boff='" <<boff <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/backoff/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff.is_set || is_set(boff.operation)) leaf_name_data.push_back(boff.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff0")
    {
        for(auto const & c : boff0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0>();
        c->parent = this;
        boff0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boff")
    {
        boff = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::Boff0()
    :
    boff0{YType::uint16, "boff0"},
    bstep{YType::uint16, "bstep"}
{
    yang_name = "boff0"; yang_parent_name = "boff";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::~Boff0()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_data() const
{
    return boff0.is_set
	|| bstep.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_operation() const
{
    return is_set(operation)
	|| is_set(boff0.operation)
	|| is_set(bstep.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff0" <<"[boff0='" <<boff0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Boff0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff0.is_set || is_set(boff0.operation)) leaf_name_data.push_back(boff0.get_name_leafdata());
    if (bstep.is_set || is_set(bstep.operation)) leaf_name_data.push_back(bstep.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boff0")
    {
        boff0 = value;
    }
    if(value_path == "bstep")
    {
        bstep = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Border()
{
    yang_name = "border"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::~Border()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::empty, "interface"}
{
    yang_name = "ipv4"; yang_parent_name = "border";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_data() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(interface.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/border/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        for(auto const & c : key_chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain>();
        c->parent = this;
        key_chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::KeyChain()
    :
    kc_name{YType::str, "kc-name"},
    interface{YType::empty, "interface"}
{
    yang_name = "key-chain"; yang_parent_name = "ipv4";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::~KeyChain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_data() const
{
    return kc_name.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(kc_name.operation)
	|| is_set(interface.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain" <<"[kc-name='" <<kc_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kc_name.is_set || is_set(kc_name.operation)) leaf_name_data.push_back(kc_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kc-name")
    {
        kc_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::Delay()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "delay"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(relative.operation)
	|| is_set(threshold.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relative")
    {
        relative = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::Jitter()
    :
    threshold{YType::uint16, "threshold"}
{
    yang_name = "jitter"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_data() const
{
    return threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::Learn()
    :
    lrn_mode__config_pfr_mc_learn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn>())
{
    lrn_mode__config_pfr_mc_learn->parent = this;

    yang_name = "learn"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::~Learn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_data() const
{
    return (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_operation() const
{
    return is_set(operation)
	|| (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lrn-Mode__config-pfr-mc-learn")
    {
        if(lrn_mode__config_pfr_mc_learn == nullptr)
        {
            lrn_mode__config_pfr_mc_learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn>();
        }
        return lrn_mode__config_pfr_mc_learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lrn_mode__config_pfr_mc_learn != nullptr)
    {
        children["lrn-Mode__config-pfr-mc-learn"] = lrn_mode__config_pfr_mc_learn;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::LrnMode__ConfigPfrMcLearn()
    :
    delay{YType::empty, "delay"},
    monitor_period{YType::uint16, "monitor-period"},
    periodic_interval{YType::uint16, "periodic-interval"},
    throughput{YType::empty, "throughput"}
    	,
    aggregation_type(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType>())
	,expire(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire>())
	,inside(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside>())
	,list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List>())
	,prefixes(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes>())
	,traffic_class(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass>())
{
    aggregation_type->parent = this;

    expire->parent = this;

    inside->parent = this;

    list->parent = this;

    prefixes->parent = this;

    traffic_class->parent = this;

    yang_name = "lrn-Mode__config-pfr-mc-learn"; yang_parent_name = "learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::~LrnMode__ConfigPfrMcLearn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::has_data() const
{
    return delay.is_set
	|| monitor_period.is_set
	|| periodic_interval.is_set
	|| throughput.is_set
	|| (aggregation_type !=  nullptr && aggregation_type->has_data())
	|| (expire !=  nullptr && expire->has_data())
	|| (inside !=  nullptr && inside->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| is_set(monitor_period.operation)
	|| is_set(periodic_interval.operation)
	|| is_set(throughput.operation)
	|| (aggregation_type !=  nullptr && aggregation_type->has_operation())
	|| (expire !=  nullptr && expire->has_operation())
	|| (inside !=  nullptr && inside->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lrn-Mode__config-pfr-mc-learn";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (monitor_period.is_set || is_set(monitor_period.operation)) leaf_name_data.push_back(monitor_period.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.operation)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (throughput.is_set || is_set(throughput.operation)) leaf_name_data.push_back(throughput.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation-type")
    {
        if(aggregation_type == nullptr)
        {
            aggregation_type = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType>();
        }
        return aggregation_type;
    }

    if(child_yang_name == "expire")
    {
        if(expire == nullptr)
        {
            expire = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire>();
        }
        return expire;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List>();
        }
        return list;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation_type != nullptr)
    {
        children["aggregation-type"] = aggregation_type;
    }

    if(expire != nullptr)
    {
        children["expire"] = expire;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "monitor-period")
    {
        monitor_period = value;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
    }
    if(value_path == "throughput")
    {
        throughput = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::AggregationType()
    :
    bgp{YType::empty, "bgp"},
    non_bgp{YType::empty, "non-bgp"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "aggregation-type"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::~AggregationType()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::has_data() const
{
    return bgp.is_set
	|| non_bgp.is_set
	|| prefix_length.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp.operation)
	|| is_set(non_bgp.operation)
	|| is_set(prefix_length.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation-type";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (non_bgp.is_set || is_set(non_bgp.operation)) leaf_name_data.push_back(non_bgp.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::AggregationType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp = value;
    }
    if(value_path == "non-bgp")
    {
        non_bgp = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::Expire()
    :
    after(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After>())
{
    after->parent = this;

    yang_name = "expire"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::~Expire()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::has_data() const
{
    return (after !=  nullptr && after->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::has_operation() const
{
    return is_set(operation)
	|| (after !=  nullptr && after->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "after")
    {
        if(after == nullptr)
        {
            after = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After>();
        }
        return after;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(after != nullptr)
    {
        children["after"] = after;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::After()
    :
    session{YType::uint16, "session"},
    time{YType::uint16, "time"}
{
    yang_name = "after"; yang_parent_name = "expire";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::~After()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::has_data() const
{
    return session.is_set
	|| time.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::has_operation() const
{
    return is_set(operation)
	|| is_set(session.operation)
	|| is_set(time.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "after";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/expire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Expire::After::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::Inside()
    :
    bgp{YType::empty, "bgp"}
{
    yang_name = "inside"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::~Inside()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::has_data() const
{
    return bgp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Inside::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::List()
    :
    seq(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq>())
{
    seq->parent = this;

    yang_name = "list"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::~List()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::has_data() const
{
    return (seq !=  nullptr && seq->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::has_operation() const
{
    return is_set(operation)
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::Seq()
{
    yang_name = "seq"; yang_parent_name = "list";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::~Seq()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::has_data() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::has_operation() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-tc")
    {
        for(auto const & c : pfr_tc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc>();
        c->parent = this;
        pfr_tc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pfr_tc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::PfrTc()
    :
    pfr_tc{YType::uint16, "pfr-tc"},
    refname{YType::empty, "refname"}
{
    yang_name = "pfr-tc"; yang_parent_name = "seq";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::~PfrTc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::has_data() const
{
    return pfr_tc.is_set
	|| refname.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::has_operation() const
{
    return is_set(operation)
	|| is_set(pfr_tc.operation)
	|| is_set(refname.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-tc" <<"[pfr-tc='" <<pfr_tc <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/seq/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tc.is_set || is_set(pfr_tc.operation)) leaf_name_data.push_back(pfr_tc.get_name_leafdata());
    if (refname.is_set || is_set(refname.operation)) leaf_name_data.push_back(refname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::List::Seq::PfrTc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc = value;
    }
    if(value_path == "refname")
    {
        refname = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prefixes()
{
    yang_name = "prefixes"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::~Prefixes()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prnum")
    {
        for(auto const & c : prnum)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum>();
        c->parent = this;
        prnum.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prnum)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::Prnum()
    :
    prnum{YType::uint32, "prnum"},
    applications{YType::uint16, "applications"}
{
    yang_name = "prnum"; yang_parent_name = "prefixes";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::~Prnum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::has_data() const
{
    return prnum.is_set
	|| applications.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::has_operation() const
{
    return is_set(operation)
	|| is_set(prnum.operation)
	|| is_set(applications.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prnum" <<"[prnum='" <<prnum <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prnum.is_set || is_set(prnum.operation)) leaf_name_data.push_back(prnum.get_name_leafdata());
    if (applications.is_set || is_set(applications.operation)) leaf_name_data.push_back(applications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::Prefixes::Prnum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prnum")
    {
        prnum = value;
    }
    if(value_path == "applications")
    {
        applications = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::TrafficClass()
    :
    aggregate(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate>())
	,filter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter>())
	,keys(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys>())
{
    aggregate->parent = this;

    filter->parent = this;

    keys->parent = this;

    yang_name = "traffic-class"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::~TrafficClass()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (keys !=  nullptr && keys->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::has_operation() const
{
    return is_set(operation)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (keys !=  nullptr && keys->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "keys")
    {
        if(keys == nullptr)
        {
            keys = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys>();
        }
        return keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(keys != nullptr)
    {
        children["keys"] = keys;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::Aggregate()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "aggregate"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::~Aggregate()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Aggregate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::Filter()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "filter"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::~Filter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Keys()
    :
    dport(nullptr) // presence node
	,dscp(nullptr) // presence node
	,protocol(nullptr) // presence node
	,sport(nullptr) // presence node
{
    yang_name = "keys"; yang_parent_name = "traffic-class";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::~Keys()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::has_data() const
{
    return (dport !=  nullptr && dport->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::has_operation() const
{
    return is_set(operation)
	|| (dport !=  nullptr && dport->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keys";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dport")
    {
        if(dport == nullptr)
        {
            dport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport>();
        }
        return dport;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dport != nullptr)
    {
        children["dport"] = dport;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::Dport()
    :
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{
    yang_name = "dport"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::~Dport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::has_data() const
{
    return dscp.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(protocol.operation)
	|| is_set(sport.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.operation)) leaf_name_data.push_back(sport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "sport")
    {
        sport = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::Dscp()
    :
    dport{YType::empty, "dport"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{
    yang_name = "dscp"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::~Dscp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::has_data() const
{
    return dport.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dport.operation)
	|| is_set(protocol.operation)
	|| is_set(sport.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.operation)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.operation)) leaf_name_data.push_back(sport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dport")
    {
        dport = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "sport")
    {
        sport = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Protocol()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
    	,
    sport(nullptr) // presence node
{
    yang_name = "protocol"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(dport.operation)
	|| is_set(dscp.operation)
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.operation)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dport")
    {
        dport = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "sport"; yang_parent_name = "protocol";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::has_operation() const
{
    return is_set(operation)
	|| is_set(dport.operation)
	|| is_set(dscp.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.operation)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dport")
    {
        dport = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"}
{
    yang_name = "sport"; yang_parent_name = "keys";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| protocol.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::has_operation() const
{
    return is_set(operation)
	|| is_set(dport.operation)
	|| is_set(dscp.operation)
	|| is_set(protocol.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.operation)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnMode__ConfigPfrMcLearn::TrafficClass::Keys::Sport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dport")
    {
        dport = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "loss"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_operation() const
{
    return is_set(operation)
	|| is_set(relative.operation)
	|| is_set(threshold.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relative")
    {
        relative = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Max()
    :
    prefix(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>())
	,range(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>())
{
    prefix->parent = this;

    range->parent = this;

    yang_name = "max"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::~Max()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_operation() const
{
    return is_set(operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Prefix()
    :
    total(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>())
{
    total->parent = this;

    yang_name = "prefix"; yang_parent_name = "max";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::~Prefix()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_data() const
{
    return (total !=  nullptr && total->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_operation() const
{
    return is_set(operation)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Total()
{
    yang_name = "total"; yang_parent_name = "prefix";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::~Total()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_data() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_operation() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpr")
    {
        for(auto const & c : maxpr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr>();
        c->parent = this;
        maxpr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maxpr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::Maxpr()
    :
    maxpr{YType::uint32, "maxpr"},
    learn{YType::uint32, "learn"}
{
    yang_name = "maxpr"; yang_parent_name = "total";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::~Maxpr()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_data() const
{
    return maxpr.is_set
	|| learn.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_operation() const
{
    return is_set(operation)
	|| is_set(maxpr.operation)
	|| is_set(learn.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpr" <<"[maxpr='" <<maxpr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/total/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpr.is_set || is_set(maxpr.operation)) leaf_name_data.push_back(maxpr.get_name_leafdata());
    if (learn.is_set || is_set(learn.operation)) leaf_name_data.push_back(learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maxpr")
    {
        maxpr = value;
    }
    if(value_path == "learn")
    {
        learn = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Range()
    :
    receive(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>())
{
    receive->parent = this;

    yang_name = "range"; yang_parent_name = "max";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::~Range()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_data() const
{
    return (receive !=  nullptr && receive->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_operation() const
{
    return is_set(operation)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::Receive()
    :
    percent{YType::uint8, "percent"}
{
    yang_name = "receive"; yang_parent_name = "range";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::~Receive()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::MaxRangeUtilization()
    :
    percent{YType::uint8, "percent"}
{
    yang_name = "max-range-utilization"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::~MaxRangeUtilization()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-range-utilization";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::McPeer()
    :
    description{YType::str, "description"}
    	,
    domain(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>())
	,head_end(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>())
{
    domain->parent = this;

    eigrp->parent = this;

    head_end->parent = this;

    yang_name = "mc-peer"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::~McPeer()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return description.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (head_end !=  nullptr && head_end->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(description.operation)
	|| (domain !=  nullptr && domain->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (head_end !=  nullptr && head_end->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-peer";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "head-end")
    {
        if(head_end == nullptr)
        {
            head_end = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>();
        }
        return head_end;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(head_end != nullptr)
    {
        children["head-end"] = head_end;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "ipv4"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "ipv4";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(description.operation)
	|| is_set(domain.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Domain()
{
    yang_name = "domain"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::~Domain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_data() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_operation() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmval")
    {
        for(auto const & c : dmval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval>();
        c->parent = this;
        dmval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dmval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Dmval()
    :
    dmval{YType::uint16, "dmval"},
    description{YType::str, "description"},
    eigrp{YType::str, "eigrp"},
    head_end{YType::str, "head-end"}
{
    yang_name = "dmval"; yang_parent_name = "domain";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::~Dmval()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return dmval.is_set
	|| description.is_set
	|| eigrp.is_set
	|| head_end.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dmval.operation)
	|| is_set(description.operation)
	|| is_set(eigrp.operation)
	|| is_set(head_end.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmval" <<"[dmval='" <<dmval <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmval.is_set || is_set(dmval.operation)) leaf_name_data.push_back(dmval.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (head_end.is_set || is_set(head_end.operation)) leaf_name_data.push_back(head_end.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dmval")
    {
        dmval = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "head-end")
    {
        head_end = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{
    yang_name = "ipv4"; yang_parent_name = "dmval";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(interface.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "eigrp";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(description.operation)
	|| is_set(domain.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/eigrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::HeadEnd()
{
    yang_name = "head-end"; yang_parent_name = "mc-peer";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::~HeadEnd()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{
    yang_name = "interface"; yang_parent_name = "head-end";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(description.operation)
	|| is_set(domain.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/head-end/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Mode()
    :
    monitor(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>())
	,route(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>())
	,verify(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>())
{
    monitor->parent = this;

    route->parent = this;

    verify->parent = this;

    yang_name = "mode"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::~Mode()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>();
        }
        return route;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Monitor()
    :
    both{YType::empty, "both"},
    fast{YType::empty, "fast"},
    passive{YType::empty, "passive"}
    	,
    active(nullptr) // presence node
{
    yang_name = "monitor"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::~Monitor()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_data() const
{
    return both.is_set
	|| fast.is_set
	|| passive.is_set
	|| (active !=  nullptr && active->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(both.operation)
	|| is_set(fast.operation)
	|| is_set(passive.operation)
	|| (active !=  nullptr && active->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.operation)) leaf_name_data.push_back(both.get_name_leafdata());
    if (fast.is_set || is_set(fast.operation)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "both")
    {
        both = value;
    }
    if(value_path == "fast")
    {
        fast = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::Active()
    :
    throughput{YType::empty, "throughput"}
{
    yang_name = "active"; yang_parent_name = "monitor";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::~Active()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_data() const
{
    return throughput.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_operation() const
{
    return is_set(operation)
	|| is_set(throughput.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throughput.is_set || is_set(throughput.operation)) leaf_name_data.push_back(throughput.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "throughput")
    {
        throughput = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Route()
    :
    control{YType::empty, "control"},
    observe{YType::empty, "observe"}
    	,
    metric(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>())
	,protocol(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>())
{
    metric->parent = this;

    protocol->parent = this;

    yang_name = "route"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::~Route()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_data() const
{
    return control.is_set
	|| observe.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(control.operation)
	|| is_set(observe.operation)
	|| (metric !=  nullptr && metric->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control.is_set || is_set(control.operation)) leaf_name_data.push_back(control.get_name_leafdata());
    if (observe.is_set || is_set(observe.operation)) leaf_name_data.push_back(observe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control")
    {
        control = value;
    }
    if(value_path == "observe")
    {
        observe = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Metric()
    :
    bgp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>())
	,static_(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>())
{
    bgp->parent = this;

    eigrp->parent = this;

    static_->parent = this;

    yang_name = "metric"; yang_parent_name = "route";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::~Metric()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::Bgp()
    :
    local_pref{YType::uint16, "local-pref"}
{
    yang_name = "bgp"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::~Bgp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_data() const
{
    return local_pref.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(local_pref.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref.is_set || is_set(local_pref.operation)) leaf_name_data.push_back(local_pref.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-pref")
    {
        local_pref = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::Eigrp()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "eigrp"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::Static_()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "static"; yang_parent_name = "metric";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::~Static_()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::Protocol()
    :
    pbr{YType::empty, "pbr"}
{
    yang_name = "protocol"; yang_parent_name = "route";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_data() const
{
    return pbr.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(pbr.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbr.is_set || is_set(pbr.operation)) leaf_name_data.push_back(pbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbr")
    {
        pbr = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::Verify()
    :
    bidirectional{YType::empty, "bidirectional"}
{
    yang_name = "verify"; yang_parent_name = "mode";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::~Verify()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_data() const
{
    return bidirectional.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(bidirectional.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidirectional.is_set || is_set(bidirectional.operation)) leaf_name_data.push_back(bidirectional.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bidirectional")
    {
        bidirectional = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Mos()
    :
    threshold(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>())
{
    threshold->parent = this;

    yang_name = "mos"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::Threshold()
{
    yang_name = "threshold"; yang_parent_name = "mos";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::~Threshold()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_data() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_operation() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-thresh")
    {
        for(auto const & c : mos_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh>();
        c->parent = this;
        mos_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::MosThresh()
    :
    mos_thresh{YType::str, "mos-thresh"},
    percent{YType::uint8, "percent"}
{
    yang_name = "mos-thresh"; yang_parent_name = "threshold";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::~MosThresh()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_data() const
{
    return mos_thresh.is_set
	|| percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_operation() const
{
    return is_set(operation)
	|| is_set(mos_thresh.operation)
	|| is_set(percent.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-thresh" <<"[mos-thresh='" <<mos_thresh <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_thresh.is_set || is_set(mos_thresh.operation)) leaf_name_data.push_back(mos_thresh.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::Probe()
    :
    packets{YType::uint8, "packets"}
{
    yang_name = "probe"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::~Probe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_data() const
{
    return packets.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_operation() const
{
    return is_set(operation)
	|| is_set(packets.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packets")
    {
        packets = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Resolve()
    :
    cost{YType::empty, "cost"},
    equivalent_path_round_robin{YType::empty, "equivalent-path-round-robin"}
    	,
    delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>())
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>())
{
    delay->parent = this;

    jitter->parent = this;

    loss->parent = this;

    mos->parent = this;

    yang_name = "resolve"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::~Resolve()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_data() const
{
    return cost.is_set
	|| equivalent_path_round_robin.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (mos !=  nullptr && mos->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(equivalent_path_round_robin.operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (mos !=  nullptr && mos->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolve";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (equivalent_path_round_robin.is_set || is_set(equivalent_path_round_robin.operation)) leaf_name_data.push_back(equivalent_path_round_robin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>();
        }
        return mos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Delay()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>())
{
    priority->parent = this;

    yang_name = "delay"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "delay";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_data() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_operation() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "del-pol")
    {
        for(auto const & c : del_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol>();
        c->parent = this;
        del_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : del_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::DelPol()
    :
    del_pol{YType::uint8, "del-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "del-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::~DelPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_data() const
{
    return del_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_operation() const
{
    return is_set(operation)
	|| is_set(del_pol.operation)
	|| is_set(variance.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-pol" <<"[del-pol='" <<del_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_pol.is_set || is_set(del_pol.operation)) leaf_name_data.push_back(del_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "del-pol")
    {
        del_pol = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Jitter()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>())
{
    priority->parent = this;

    yang_name = "jitter"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "jitter";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_data() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_operation() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jit-pol")
    {
        for(auto const & c : jit_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol>();
        c->parent = this;
        jit_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jit_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::JitPol()
    :
    jit_pol{YType::uint8, "jit-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "jit-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::~JitPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_data() const
{
    return jit_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_operation() const
{
    return is_set(operation)
	|| is_set(jit_pol.operation)
	|| is_set(variance.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jit-pol" <<"[jit-pol='" <<jit_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jit_pol.is_set || is_set(jit_pol.operation)) leaf_name_data.push_back(jit_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "jit-pol")
    {
        jit_pol = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Loss()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>())
{
    priority->parent = this;

    yang_name = "loss"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "loss";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_data() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_operation() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-pol")
    {
        for(auto const & c : loss_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol>();
        c->parent = this;
        loss_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loss_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::LossPol()
    :
    loss_pol{YType::uint8, "loss-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "loss-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::~LossPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_data() const
{
    return loss_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_operation() const
{
    return is_set(operation)
	|| is_set(loss_pol.operation)
	|| is_set(variance.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-pol" <<"[loss-pol='" <<loss_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_pol.is_set || is_set(loss_pol.operation)) leaf_name_data.push_back(loss_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "loss-pol")
    {
        loss_pol = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Mos()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>())
{
    priority->parent = this;

    yang_name = "mos"; yang_parent_name = "resolve";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "mos";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_data() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_operation() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-pol")
    {
        for(auto const & c : mos_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol>();
        c->parent = this;
        mos_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::MosPol()
    :
    mos_pol{YType::uint8, "mos-pol"},
    variance{YType::uint8, "variance"}
{
    yang_name = "mos-pol"; yang_parent_name = "priority";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::~MosPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_data() const
{
    return mos_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_operation() const
{
    return is_set(operation)
	|| is_set(mos_pol.operation)
	|| is_set(variance.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-pol" <<"[mos-pol='" <<mos_pol <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_pol.is_set || is_set(mos_pol.operation)) leaf_name_data.push_back(mos_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mos-pol")
    {
        mos_pol = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::Rsvp()
    :
    post_dial_delay{YType::uint16, "post-dial-delay"},
    signaling_retries{YType::uint8, "signaling-retries"}
{
    yang_name = "rsvp"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::~Rsvp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_data() const
{
    return post_dial_delay.is_set
	|| signaling_retries.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_operation() const
{
    return is_set(operation)
	|| is_set(post_dial_delay.operation)
	|| is_set(signaling_retries.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_dial_delay.is_set || is_set(post_dial_delay.operation)) leaf_name_data.push_back(post_dial_delay.get_name_leafdata());
    if (signaling_retries.is_set || is_set(signaling_retries.operation)) leaf_name_data.push_back(signaling_retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay = value;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::TargetDiscovery()
    :
    responder_list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>())
{
    responder_list->parent = this;

    yang_name = "target-discovery"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::~TargetDiscovery()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_data() const
{
    return (responder_list !=  nullptr && responder_list->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_operation() const
{
    return is_set(operation)
	|| (responder_list !=  nullptr && responder_list->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-discovery";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-list")
    {
        if(responder_list == nullptr)
        {
            responder_list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>();
        }
        return responder_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(responder_list != nullptr)
    {
        children["responder-list"] = responder_list;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::ResponderList()
{
    yang_name = "responder-list"; yang_parent_name = "target-discovery";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::~ResponderList()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_data() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_operation() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-list";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "td-num")
    {
        for(auto const & c : td_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum>();
        c->parent = this;
        td_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : td_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_value(const std::string & value_path, std::string value)
{
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::TdNum()
    :
    td_num{YType::str, "td-num"},
    inside_prefixes{YType::str, "inside-prefixes"}
{
    yang_name = "td-num"; yang_parent_name = "responder-list";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::~TdNum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_data() const
{
    return td_num.is_set
	|| inside_prefixes.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_operation() const
{
    return is_set(operation)
	|| is_set(td_num.operation)
	|| is_set(inside_prefixes.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "td-num" <<"[td-num='" <<td_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/responder-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (td_num.is_set || is_set(td_num.operation)) leaf_name_data.push_back(td_num.get_name_leafdata());
    if (inside_prefixes.is_set || is_set(inside_prefixes.operation)) leaf_name_data.push_back(inside_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "td-num")
    {
        td_num = value;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::Traceroute()
    :
    probe_delay{YType::uint16, "probe-delay"}
{
    yang_name = "traceroute"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::~Traceroute()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_data() const
{
    return probe_delay.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_operation() const
{
    return is_set(operation)
	|| is_set(probe_delay.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_delay.is_set || is_set(probe_delay.operation)) leaf_name_data.push_back(probe_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probe-delay")
    {
        probe_delay = value;
    }
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::Unreachable()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "unreachable"; yang_parent_name = "icmp-Mode-config-pfr-mc";
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::~Unreachable()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_operation() const
{
    return is_set(operation)
	|| is_set(relative.operation)
	|| is_set(threshold.operation);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

const EntityPath Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relative")
    {
        relative = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::PfrMap::PfrMap()
    :
    pfr_tg{YType::str, "pfr-tg"}
    	,
    match(std::make_shared<Native::PfrMap::Match>())
	,set(std::make_shared<Native::PfrMap::Set>())
{
    match->parent = this;

    set->parent = this;

    yang_name = "pfr-map"; yang_parent_name = "native";
}

Native::PfrMap::~PfrMap()
{
}

bool Native::PfrMap::has_data() const
{
    return pfr_tg.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::PfrMap::has_operation() const
{
    return is_set(operation)
	|| is_set(pfr_tg.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::PfrMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-map" <<"[pfr-tg='" <<pfr_tg <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tg.is_set || is_set(pfr_tg.operation)) leaf_name_data.push_back(pfr_tg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::PfrMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::PfrMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::PfrMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg = value;
    }
}

Native::PfrMap::Match::Match()
    :
    ip(std::make_shared<Native::PfrMap::Match::Ip>())
	,pfr(std::make_shared<Native::PfrMap::Match::Pfr>())
	,traffic_class(std::make_shared<Native::PfrMap::Match::TrafficClass>())
{
    ip->parent = this;

    pfr->parent = this;

    traffic_class->parent = this;

    yang_name = "match"; yang_parent_name = "pfr-map";
}

Native::PfrMap::Match::~Match()
{
}

bool Native::PfrMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::PfrMap::Match::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::PfrMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:match";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PfrMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::PfrMap::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::PfrMap::Match::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::PfrMap::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Match::Ip::Ip()
    :
    address{YType::empty, "address"}
{
    yang_name = "ip"; yang_parent_name = "match";
}

Native::PfrMap::Match::Ip::~Ip()
{
}

bool Native::PfrMap::Match::Ip::has_data() const
{
    return address.is_set;
}

bool Native::PfrMap::Match::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::PfrMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::PfrMap::Match::Pfr::Pfr()
    :
    learn{YType::empty, "learn"}
{
    yang_name = "pfr"; yang_parent_name = "match";
}

Native::PfrMap::Match::Pfr::~Pfr()
{
}

bool Native::PfrMap::Match::Pfr::has_data() const
{
    return learn.is_set;
}

bool Native::PfrMap::Match::Pfr::has_operation() const
{
    return is_set(operation)
	|| is_set(learn.operation);
}

std::string Native::PfrMap::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::Pfr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.operation)) leaf_name_data.push_back(learn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Pfr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learn")
    {
        learn = value;
    }
}

Native::PfrMap::Match::TrafficClass::TrafficClass()
    :
    access_list{YType::empty, "access-list"},
    application{YType::empty, "application"},
    prefix_list{YType::empty, "prefix-list"}
{
    yang_name = "traffic-class"; yang_parent_name = "match";
}

Native::PfrMap::Match::TrafficClass::~TrafficClass()
{
}

bool Native::PfrMap::Match::TrafficClass::has_data() const
{
    return access_list.is_set
	|| application.is_set
	|| prefix_list.is_set;
}

bool Native::PfrMap::Match::TrafficClass::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation)
	|| is_set(application.operation)
	|| is_set(prefix_list.operation);
}

std::string Native::PfrMap::Match::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Match::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (application.is_set || is_set(application.operation)) leaf_name_data.push_back(application.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Match::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::TrafficClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "application")
    {
        application = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::PfrMap::Set::Set()
    :
    holddown{YType::uint16, "holddown"},
    interface{YType::str, "interface"},
    jitter{YType::empty, "jitter"},
    mode{YType::empty, "mode"},
    mos{YType::empty, "mos"},
    next_hop{YType::empty, "next-hop"},
    periodic{YType::empty, "periodic"},
    probe{YType::empty, "probe"},
    resolve{YType::empty, "resolve"},
    traceroute{YType::empty, "traceroute"},
    trap_enable{YType::empty, "trap-enable"},
    trigger_log_percentage{YType::empty, "trigger-log-percentage"},
    unreachable{YType::empty, "unreachable"}
    	,
    active_probe(std::make_shared<Native::PfrMap::Set::ActiveProbe>())
	,backoff(std::make_shared<Native::PfrMap::Set::Backoff>())
	,delay(std::make_shared<Native::PfrMap::Set::Delay>())
	,link_group(std::make_shared<Native::PfrMap::Set::LinkGroup>())
	,loss(std::make_shared<Native::PfrMap::Set::Loss>())
{
    active_probe->parent = this;

    backoff->parent = this;

    delay->parent = this;

    link_group->parent = this;

    loss->parent = this;

    yang_name = "set"; yang_parent_name = "pfr-map";
}

Native::PfrMap::Set::~Set()
{
}

bool Native::PfrMap::Set::has_data() const
{
    return holddown.is_set
	|| interface.is_set
	|| jitter.is_set
	|| mode.is_set
	|| mos.is_set
	|| next_hop.is_set
	|| periodic.is_set
	|| probe.is_set
	|| resolve.is_set
	|| traceroute.is_set
	|| trap_enable.is_set
	|| trigger_log_percentage.is_set
	|| unreachable.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (link_group !=  nullptr && link_group->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool Native::PfrMap::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(holddown.operation)
	|| is_set(interface.operation)
	|| is_set(jitter.operation)
	|| is_set(mode.operation)
	|| is_set(mos.operation)
	|| is_set(next_hop.operation)
	|| is_set(periodic.operation)
	|| is_set(probe.operation)
	|| is_set(resolve.operation)
	|| is_set(traceroute.operation)
	|| is_set(trap_enable.operation)
	|| is_set(trigger_log_percentage.operation)
	|| is_set(unreachable.operation)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (link_group !=  nullptr && link_group->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string Native::PfrMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:set";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.operation)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mos.is_set || is_set(mos.operation)) leaf_name_data.push_back(mos.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.operation)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (probe.is_set || is_set(probe.operation)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (resolve.is_set || is_set(resolve.operation)) leaf_name_data.push_back(resolve.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.operation)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (trap_enable.is_set || is_set(trap_enable.operation)) leaf_name_data.push_back(trap_enable.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.operation)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.operation)) leaf_name_data.push_back(unreachable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::PfrMap::Set::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::PfrMap::Set::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::PfrMap::Set::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "link-group")
    {
        if(link_group == nullptr)
        {
            link_group = std::make_shared<Native::PfrMap::Set::LinkGroup>();
        }
        return link_group;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::PfrMap::Set::Loss>();
        }
        return loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(link_group != nullptr)
    {
        children["link-group"] = link_group;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    return children;
}

void Native::PfrMap::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holddown")
    {
        holddown = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "jitter")
    {
        jitter = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "mos")
    {
        mos = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "periodic")
    {
        periodic = value;
    }
    if(value_path == "probe")
    {
        probe = value;
    }
    if(value_path == "resolve")
    {
        resolve = value;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
    }
    if(value_path == "trap-enable")
    {
        trap_enable = value;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
    }
}

Native::PfrMap::Set::ActiveProbe::ActiveProbe()
    :
    echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>())
	,jitter(std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>())
{
    echo->parent = this;

    jitter->parent = this;

    tcp_conn->parent = this;

    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "set";
}

Native::PfrMap::Set::ActiveProbe::~ActiveProbe()
{
}

bool Native::PfrMap::Set::ActiveProbe::has_data() const
{
    return (echo !=  nullptr && echo->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::PfrMap::Set::ActiveProbe::has_operation() const
{
    return is_set(operation)
	|| (echo !=  nullptr && echo->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::PfrMap::Set::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveProbe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::ActiveProbe::Echo::Echo()
{
    yang_name = "echo"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::Echo::~Echo()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Echo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Echo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "echo";
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| dscp.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(dscp.operation);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::PfrMap::Set::ActiveProbe::Jitter::Jitter()
{
    yang_name = "jitter"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Jitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Jitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter";
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(target_port.operation);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.operation)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "target-port")
    {
        target_port = value;
    }
}

Native::PfrMap::Set::ActiveProbe::TcpConn::TcpConn()
{
    yang_name = "tcp-conn"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::TcpConn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpConn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn";
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(target_port.operation);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.operation)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "target-port")
    {
        target_port = value;
    }
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::UdpEcho()
{
    yang_name = "udp-echo"; yang_parent_name = "active-probe";
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::UdpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{
    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo";
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(target_port.operation);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.operation)) leaf_name_data.push_back(target_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "target-port")
    {
        target_port = value;
    }
}

Native::PfrMap::Set::Backoff::Backoff()
{
    yang_name = "backoff"; yang_parent_name = "set";
}

Native::PfrMap::Set::Backoff::~Backoff()
{
}

bool Native::PfrMap::Set::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoff' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t")
    {
        for(auto const & c : boff_t)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT>();
        c->parent = this;
        boff_t.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::Backoff::BoffT::BoffT()
    :
    boff_t{YType::uint16, "boff-t"}
{
    yang_name = "boff-t"; yang_parent_name = "backoff";
}

Native::PfrMap::Set::Backoff::BoffT::~BoffT()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::has_data() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_data())
            return true;
    }
    return boff_t.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::has_operation() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(boff_t.operation);
}

std::string Native::PfrMap::Set::Backoff::BoffT::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t" <<"[boff-t='" <<boff_t <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::BoffT::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BoffT' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t.is_set || is_set(boff_t.operation)) leaf_name_data.push_back(boff_t.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t0")
    {
        for(auto const & c : boff_t0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT::BoffT0>();
        c->parent = this;
        boff_t0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boff-t")
    {
        boff_t = value;
    }
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::BoffT0()
    :
    boff_t0{YType::uint16, "boff-t0"},
    boff_rng{YType::uint16, "boff-rng"}
{
    yang_name = "boff-t0"; yang_parent_name = "boff-t";
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::~BoffT0()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_data() const
{
    return boff_t0.is_set
	|| boff_rng.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_operation() const
{
    return is_set(operation)
	|| is_set(boff_t0.operation)
	|| is_set(boff_rng.operation);
}

std::string Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t0" <<"[boff-t0='" <<boff_t0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BoffT0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t0.is_set || is_set(boff_t0.operation)) leaf_name_data.push_back(boff_t0.get_name_leafdata());
    if (boff_rng.is_set || is_set(boff_rng.operation)) leaf_name_data.push_back(boff_rng.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boff-t0")
    {
        boff_t0 = value;
    }
    if(value_path == "boff-rng")
    {
        boff_rng = value;
    }
}

Native::PfrMap::Set::Delay::Delay()
    :
    relative{YType::empty, "relative"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "delay"; yang_parent_name = "set";
}

Native::PfrMap::Set::Delay::~Delay()
{
}

bool Native::PfrMap::Set::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(relative.operation)
	|| is_set(threshold.operation);
}

std::string Native::PfrMap::Set::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relative")
    {
        relative = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::PfrMap::Set::LinkGroup::LinkGroup()
{
    yang_name = "link-group"; yang_parent_name = "set";
}

Native::PfrMap::Set::LinkGroup::~LinkGroup()
{
}

bool Native::PfrMap::Set::LinkGroup::has_data() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::LinkGroup::has_operation() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PfrMap::Set::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lg-name")
    {
        for(auto const & c : lg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName>();
        c->parent = this;
        lg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::PfrMap::Set::LinkGroup::LgName::LgName()
    :
    lg_name{YType::str, "lg-name"}
    	,
    fallback(nullptr) // presence node
{
    yang_name = "lg-name"; yang_parent_name = "link-group";
}

Native::PfrMap::Set::LinkGroup::LgName::~LgName()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_data() const
{
    return lg_name.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_operation() const
{
    return is_set(operation)
	|| is_set(lg_name.operation)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::PfrMap::Set::LinkGroup::LgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lg-name" <<"[lg-name='" <<lg_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::LgName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LgName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lg_name.is_set || is_set(lg_name.operation)) leaf_name_data.push_back(lg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lg-name")
    {
        lg_name = value;
    }
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::Fallback()
    :
    fall_name{YType::str, "fall-name"}
{
    yang_name = "fallback"; yang_parent_name = "lg-name";
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::~Fallback()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_data() const
{
    return fall_name.is_set;
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_operation() const
{
    return is_set(operation)
	|| is_set(fall_name.operation);
}

std::string Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fallback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fall_name.is_set || is_set(fall_name.operation)) leaf_name_data.push_back(fall_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fall-name")
    {
        fall_name = value;
    }
}

Native::PfrMap::Set::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "loss"; yang_parent_name = "set";
}

Native::PfrMap::Set::Loss::~Loss()
{
}

bool Native::PfrMap::Set::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Loss::has_operation() const
{
    return is_set(operation)
	|| is_set(relative.operation)
	|| is_set(threshold.operation);
}

std::string Native::PfrMap::Set::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";

    return path_buffer.str();

}

const EntityPath Native::PfrMap::Set::Loss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loss' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.operation)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Loss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relative")
    {
        relative = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::FacilityAlarm::FacilityAlarm()
    :
    exceed_action{YType::enumeration, "exceed-action"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "facility-alarm"; yang_parent_name = "native";
}

Native::FacilityAlarm::~FacilityAlarm()
{
}

bool Native::FacilityAlarm::has_data() const
{
    return exceed_action.is_set
	|| severity.is_set;
}

bool Native::FacilityAlarm::has_operation() const
{
    return is_set(operation)
	|| is_set(exceed_action.operation)
	|| is_set(severity.operation);
}

std::string Native::FacilityAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility-alarm";

    return path_buffer.str();

}

const EntityPath Native::FacilityAlarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exceed_action.is_set || is_set(exceed_action.operation)) leaf_name_data.push_back(exceed_action.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::FacilityAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FacilityAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::FacilityAlarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exceed-action")
    {
        exceed_action = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Setup::Setup()
    :
    express{YType::boolean, "Cisco-IOS-XE-switch:express"}
{
    yang_name = "setup"; yang_parent_name = "native";
}

Native::Setup::~Setup()
{
}

bool Native::Setup::has_data() const
{
    return express.is_set;
}

bool Native::Setup::has_operation() const
{
    return is_set(operation)
	|| is_set(express.operation);
}

std::string Native::Setup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup";

    return path_buffer.str();

}

const EntityPath Native::Setup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (express.is_set || is_set(express.operation)) leaf_name_data.push_back(express.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Setup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Setup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Setup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "express")
    {
        express = value;
    }
}

Native::TodClock::TodClock()
    :
    input_source(std::make_shared<Native::TodClock::InputSource>())
{
    input_source->parent = this;

    yang_name = "tod-clock"; yang_parent_name = "native";
}

Native::TodClock::~TodClock()
{
}

bool Native::TodClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data());
}

bool Native::TodClock::has_operation() const
{
    return is_set(operation)
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::TodClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tod-clock";

    return path_buffer.str();

}

const EntityPath Native::TodClock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TodClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::TodClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    return children;
}

void Native::TodClock::set_value(const std::string & value_path, std::string value)
{
}

Native::TodClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    ptp(std::make_shared<Native::TodClock::InputSource::Ptp>())
{
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "tod-clock";
}

Native::TodClock::InputSource::~InputSource()
{
}

bool Native::TodClock::InputSource::has_data() const
{
    return priority.is_set
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::TodClock::InputSource::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::TodClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";

    return path_buffer.str();

}

const EntityPath Native::TodClock::InputSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/tod-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::TodClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::TodClock::InputSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::TodClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{
    yang_name = "ptp"; yang_parent_name = "input-source";
}

Native::TodClock::InputSource::Ptp::~Ptp()
{
}

bool Native::TodClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::TodClock::InputSource::Ptp::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation);
}

std::string Native::TodClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";

    return path_buffer.str();

}

const EntityPath Native::TodClock::InputSource::Ptp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/tod-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TodClock::InputSource::Ptp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
}

Native::NetworkClock::NetworkClock()
    :
    input_source(std::make_shared<Native::NetworkClock::InputSource>())
	,synchronization(std::make_shared<Native::NetworkClock::Synchronization>())
	,wait_to_restore(std::make_shared<Native::NetworkClock::WaitToRestore>())
{
    input_source->parent = this;

    synchronization->parent = this;

    wait_to_restore->parent = this;

    yang_name = "network-clock"; yang_parent_name = "native";
}

Native::NetworkClock::~NetworkClock()
{
}

bool Native::NetworkClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data())
	|| (synchronization !=  nullptr && synchronization->has_data())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_data());
}

bool Native::NetworkClock::has_operation() const
{
    return is_set(operation)
	|| (input_source !=  nullptr && input_source->has_operation())
	|| (synchronization !=  nullptr && synchronization->has_operation())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_operation());
}

std::string Native::NetworkClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-clock";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::NetworkClock::InputSource>();
        }
        return input_source;
    }

    if(child_yang_name == "synchronization")
    {
        if(synchronization == nullptr)
        {
            synchronization = std::make_shared<Native::NetworkClock::Synchronization>();
        }
        return synchronization;
    }

    if(child_yang_name == "wait-to-restore")
    {
        if(wait_to_restore == nullptr)
        {
            wait_to_restore = std::make_shared<Native::NetworkClock::WaitToRestore>();
        }
        return wait_to_restore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    if(synchronization != nullptr)
    {
        children["synchronization"] = synchronization;
    }

    if(wait_to_restore != nullptr)
    {
        children["wait-to-restore"] = wait_to_restore;
    }

    return children;
}

void Native::NetworkClock::set_value(const std::string & value_path, std::string value)
{
}

Native::NetworkClock::Synchronization::Synchronization()
    :
    automatic{YType::empty, "automatic"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "synchronization"; yang_parent_name = "network-clock";
}

Native::NetworkClock::Synchronization::~Synchronization()
{
}

bool Native::NetworkClock::Synchronization::has_data() const
{
    return automatic.is_set
	|| mode.is_set;
}

bool Native::NetworkClock::Synchronization::has_operation() const
{
    return is_set(operation)
	|| is_set(automatic.operation)
	|| is_set(mode.operation);
}

std::string Native::NetworkClock::Synchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronization";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::Synchronization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic.is_set || is_set(automatic.operation)) leaf_name_data.push_back(automatic.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::Synchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::Synchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::Synchronization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "automatic")
    {
        automatic = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::NetworkClock::WaitToRestore::WaitToRestore()
    :
    global{YType::empty, "global"},
    time{YType::uint32, "time"}
{
    yang_name = "wait-to-restore"; yang_parent_name = "network-clock";
}

Native::NetworkClock::WaitToRestore::~WaitToRestore()
{
}

bool Native::NetworkClock::WaitToRestore::has_data() const
{
    return global.is_set
	|| time.is_set;
}

bool Native::NetworkClock::WaitToRestore::has_operation() const
{
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(time.operation);
}

std::string Native::NetworkClock::WaitToRestore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-to-restore";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::WaitToRestore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::WaitToRestore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::WaitToRestore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::WaitToRestore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::NetworkClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    interface(std::make_shared<Native::NetworkClock::InputSource::Interface>())
	,ptp(std::make_shared<Native::NetworkClock::InputSource::Ptp>())
{
    interface->parent = this;

    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "network-clock";
}

Native::NetworkClock::InputSource::~InputSource()
{
}

bool Native::NetworkClock::InputSource::has_data() const
{
    return priority.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::NetworkClock::InputSource::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::NetworkClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::NetworkClock::InputSource::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::NetworkClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::NetworkClock::InputSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::NetworkClock::InputSource::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "input-source";
}

Native::NetworkClock::InputSource::Interface::~Interface()
{
}

bool Native::NetworkClock::InputSource::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::NetworkClock::InputSource::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::NetworkClock::InputSource::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::NetworkClock::InputSource::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::NetworkClock::InputSource::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::NetworkClock::InputSource::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::NetworkClock::InputSource::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::NetworkClock::InputSource::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::NetworkClock::InputSource::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::NetworkClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{
    yang_name = "ptp"; yang_parent_name = "input-source";
}

Native::NetworkClock::InputSource::Ptp::~Ptp()
{
}

bool Native::NetworkClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::NetworkClock::InputSource::Ptp::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation);
}

std::string Native::NetworkClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";

    return path_buffer.str();

}

const EntityPath Native::NetworkClock::InputSource::Ptp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Ptp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
}

Native::L2Vpn::L2Vpn()
    :
    pseudowire(std::make_shared<Native::L2Vpn::Pseudowire>())
	,vfi(std::make_shared<Native::L2Vpn::Vfi>())
	,xconnect(std::make_shared<Native::L2Vpn::Xconnect>())
{
    pseudowire->parent = this;

    vfi->parent = this;

    xconnect->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "native";
}

Native::L2Vpn::~L2Vpn()
{
}

bool Native::L2Vpn::has_data() const
{
    return (pseudowire !=  nullptr && pseudowire->has_data())
	|| (vfi !=  nullptr && vfi->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::L2Vpn::has_operation() const
{
    return is_set(operation)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (vfi !=  nullptr && vfi->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2Vpn::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "vfi")
    {
        if(vfi == nullptr)
        {
            vfi = std::make_shared<Native::L2Vpn::Vfi>();
        }
        return vfi;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::L2Vpn::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    if(vfi != nullptr)
    {
        children["vfi"] = vfi;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::L2Vpn::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::Pseudowire()
    :
    routing{YType::empty, "routing"}
    	,
    group(std::make_shared<Native::L2Vpn::Pseudowire::Group>())
	,static_oam(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>())
	,tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv>())
{
    group->parent = this;

    static_oam->parent = this;

    tlv->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Pseudowire::~Pseudowire()
{
}

bool Native::L2Vpn::Pseudowire::has_data() const
{
    return routing.is_set
	|| (group !=  nullptr && group->has_data())
	|| (static_oam !=  nullptr && static_oam->has_data())
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(routing.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (static_oam !=  nullptr && static_oam->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:pseudowire";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::L2Vpn::Pseudowire::Group>();
        }
        return group;
    }

    if(child_yang_name == "static-oam")
    {
        if(static_oam == nullptr)
        {
            static_oam = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>();
        }
        return static_oam;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(static_oam != nullptr)
    {
        children["static-oam"] = static_oam;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "routing")
    {
        routing = value;
    }
}

Native::L2Vpn::Pseudowire::StaticOam::StaticOam()
{
    yang_name = "static-oam"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::StaticOam::~StaticOam()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-oam";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Class_()
    :
    pw_nm{YType::str, "pw-nm"}
    	,
    timeout(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>())
{
    timeout->parent = this;

    yang_name = "class"; yang_parent_name = "static-oam";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::~Class_()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_data() const
{
    return pw_nm.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_nm.operation)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[pw-nm='" <<pw_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/static-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_nm.is_set || is_set(pw_nm.operation)) leaf_name_data.push_back(pw_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-nm")
    {
        pw_nm = value;
    }
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Timeout()
    :
    refresh(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>())
{
    refresh->parent = this;

    yang_name = "timeout"; yang_parent_name = "class";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::~Timeout()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_data() const
{
    return (refresh !=  nullptr && refresh->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_operation() const
{
    return is_set(operation)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Refresh()
    :
    send(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>())
{
    send->parent = this;

    yang_name = "refresh"; yang_parent_name = "timeout";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::~Refresh()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_operation() const
{
    return is_set(operation)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Refresh' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::Send()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "send"; yang_parent_name = "refresh";
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::~Send()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_data() const
{
    return interval.is_set;
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::L2Vpn::Pseudowire::Tlv::Tlv()
{
    yang_name = "tlv"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::Tlv::~Tlv()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::Tlv::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Template_()
    :
    tlv_nm{YType::str, "tlv-nm"}
    	,
    tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>())
{
    tlv->parent = this;

    yang_name = "template"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::~Template_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_data() const
{
    return tlv_nm.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(tlv_nm.operation)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[tlv-nm='" <<tlv_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/tlv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_nm.is_set || is_set(tlv_nm.operation)) leaf_name_data.push_back(tlv_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm = value;
    }
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::Tlv_()
    :
    tlv_description(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>())
	,tlv_type(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>())
{
    tlv_description->parent = this;

    tlv_type->parent = this;

    yang_name = "tlv"; yang_parent_name = "template";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::~Tlv_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_data() const
{
    return (tlv_description !=  nullptr && tlv_description->has_data())
	|| (tlv_type !=  nullptr && tlv_type->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_operation() const
{
    return is_set(operation)
	|| (tlv_description !=  nullptr && tlv_description->has_operation())
	|| (tlv_type !=  nullptr && tlv_type->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-description")
    {
        if(tlv_description == nullptr)
        {
            tlv_description = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>();
        }
        return tlv_description;
    }

    if(child_yang_name == "tlv-type")
    {
        if(tlv_type == nullptr)
        {
            tlv_type = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>();
        }
        return tlv_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv_description != nullptr)
    {
        children["tlv-description"] = tlv_description;
    }

    if(tlv_type != nullptr)
    {
        children["tlv-type"] = tlv_type;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::TlvType()
    :
    type{YType::uint8, "type"}
{
    yang_name = "tlv-type"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::~TlvType()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_data() const
{
    return type.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-type";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlvType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::TlvDescription()
    :
    description{YType::str, "description"}
{
    yang_name = "tlv-description"; yang_parent_name = "tlv";
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::~TlvDescription()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_data() const
{
    return description.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-description";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlvDescription' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::L2Vpn::Pseudowire::Group::Group()
    :
    status{YType::empty, "status"}
{
    yang_name = "group"; yang_parent_name = "pseudowire";
}

Native::L2Vpn::Pseudowire::Group::~Group()
{
}

bool Native::L2Vpn::Pseudowire::Group::has_data() const
{
    return status.is_set;
}

bool Native::L2Vpn::Pseudowire::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string Native::L2Vpn::Pseudowire::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Pseudowire::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Native::L2Vpn::Vfi::Vfi()
{
    yang_name = "vfi"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Vfi::~Vfi()
{
}

bool Native::L2Vpn::Vfi::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Vfi::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::L2Vpn::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Vfi::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Vfi::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Vfi::Context::Context()
    :
    vfi_nm{YType::str, "vfi-nm"}
    	,
    autodiscovery(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>())
	,vpn(std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>())
{
    autodiscovery->parent = this;

    vpn->parent = this;

    yang_name = "context"; yang_parent_name = "vfi";
}

Native::L2Vpn::Vfi::Context::~Context()
{
}

bool Native::L2Vpn::Vfi::Context::has_data() const
{
    return vfi_nm.is_set
	|| (autodiscovery !=  nullptr && autodiscovery->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2Vpn::Vfi::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(vfi_nm.operation)
	|| (autodiscovery !=  nullptr && autodiscovery->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[vfi-nm='" <<vfi_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:vfi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_nm.is_set || is_set(vfi_nm.operation)) leaf_name_data.push_back(vfi_nm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autodiscovery")
    {
        if(autodiscovery == nullptr)
        {
            autodiscovery = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>();
        }
        return autodiscovery;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autodiscovery != nullptr)
    {
        children["autodiscovery"] = autodiscovery;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm = value;
    }
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Autodiscovery()
    :
    bgp(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>())
{
    bgp->parent = this;

    yang_name = "autodiscovery"; yang_parent_name = "context";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::~Autodiscovery()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autodiscovery";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autodiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Bgp()
    :
    signaling(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>())
{
    signaling->parent = this;

    yang_name = "bgp"; yang_parent_name = "autodiscovery";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::~Bgp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_operation() const
{
    return is_set(operation)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Signaling()
    :
    bgp(nullptr) // presence node
	,ldp(nullptr) // presence node
{
    yang_name = "signaling"; yang_parent_name = "bgp";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::~Signaling()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signaling' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::Bgp_()
    :
    template_{YType::str, "template"}
{
    yang_name = "bgp"; yang_parent_name = "signaling";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::~Bgp_()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_.operation);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::Ldp()
    :
    template_{YType::str, "template"}
{
    yang_name = "ldp"; yang_parent_name = "signaling";
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::~Ldp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_operation() const
{
    return is_set(operation)
	|| is_set(template_.operation);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::L2Vpn::Vfi::Context::Vpn::Vpn()
    :
    id{YType::uint32, "id"}
{
    yang_name = "vpn"; yang_parent_name = "context";
}

Native::L2Vpn::Vfi::Context::Vpn::~Vpn()
{
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::L2Vpn::Vfi::Context::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Vfi::Context::Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::L2Vpn::Xconnect::Xconnect()
{
    yang_name = "xconnect"; yang_parent_name = "l2vpn";
}

Native::L2Vpn::Xconnect::~Xconnect()
{
}

bool Native::L2Vpn::Xconnect::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::L2Vpn::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Xconnect::Context::Context()
    :
    xc_name{YType::str, "xc-name"}
    	,
    xc_mode_config_xconnect(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>())
{
    xc_mode_config_xconnect->parent = this;

    yang_name = "context"; yang_parent_name = "xconnect";
}

Native::L2Vpn::Xconnect::Context::~Context()
{
}

bool Native::L2Vpn::Xconnect::Context::has_data() const
{
    return xc_name.is_set
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_data());
}

bool Native::L2Vpn::Xconnect::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(xc_name.operation)
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[xc-name='" <<xc_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:xconnect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_name.is_set || is_set(xc_name.operation)) leaf_name_data.push_back(xc_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xc-Mode-config-xconnect")
    {
        if(xc_mode_config_xconnect == nullptr)
        {
            xc_mode_config_xconnect = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>();
        }
        return xc_mode_config_xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xc_mode_config_xconnect != nullptr)
    {
        children["xc-Mode-config-xconnect"] = xc_mode_config_xconnect;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xc-name")
    {
        xc_name = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::XcModeConfigXconnect()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
    	,
    interworking(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>())
	,match(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>())
	,member(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>())
	,redundancy(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>())
	,remote(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>())
{
    interworking->parent = this;

    match->parent = this;

    member->parent = this;

    redundancy->parent = this;

    remote->parent = this;

    yang_name = "xc-Mode-config-xconnect"; yang_parent_name = "context";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::~XcModeConfigXconnect()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_data() const
{
    return description.is_set
	|| shutdown.is_set
	|| (interworking !=  nullptr && interworking->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(shutdown.operation)
	|| (interworking !=  nullptr && interworking->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-Mode-config-xconnect";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XcModeConfigXconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interworking")
    {
        if(interworking == nullptr)
        {
            interworking = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>();
        }
        return interworking;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>();
        }
        return match;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>();
        }
        return member;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interworking != nullptr)
    {
        children["interworking"] = interworking;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::Interworking()
    :
    ethernet{YType::empty, "ethernet"},
    ip{YType::empty, "ip"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "interworking"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::~Interworking()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet.operation)
	|| is_set(ip.operation)
	|| is_set(vlan.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interworking";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interworking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Match()
    :
    protocol(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>())
{
    protocol->parent = this;

    yang_name = "match"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::~Match()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_operation() const
{
    return is_set(operation)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::Protocol()
    :
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "protocol"; yang_parent_name = "match";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::~Protocol()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_data() const
{
    return ipv6.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Member()
    :
    vlan{YType::uint16, "Vlan"}
{
    yang_name = "member"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::~Member()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mem_vcid{YType::uint32, "mem-vcid"}
{
    yang_name = "ipv4"; yang_parent_name = "member";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::~Ipv4()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mem_vcid.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mem_vcid.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mem_vcid.is_set || is_set(mem_vcid.operation)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::Interface()
    :
    interface{YType::str, "interface"},
    group{YType::empty, "group"},
    service_instance{YType::empty, "service-instance"}
{
    yang_name = "interface"; yang_parent_name = "member";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::~Interface()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_data() const
{
    return interface.is_set
	|| group.is_set
	|| service_instance.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(group.operation)
	|| is_set(service_instance.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.operation)) leaf_name_data.push_back(service_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Redundancy()
    :
    delay{YType::uint8, "delay"}
    	,
    predictive(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::~Redundancy()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_data() const
{
    return delay.is_set
	|| (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::Predictive()
    :
    disabled{YType::empty, "disabled"},
    enabled{YType::empty, "enabled"}
{
    yang_name = "predictive"; yang_parent_name = "redundancy";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_data() const
{
    return disabled.is_set
	|| enabled.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_operation() const
{
    return is_set(operation)
	|| is_set(disabled.operation)
	|| is_set(enabled.operation);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Predictive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Remote()
    :
    circuit(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>())
	,link(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>())
{
    circuit->parent = this;

    link->parent = this;

    yang_name = "remote"; yang_parent_name = "xc-Mode-config-xconnect";
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::~Remote()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_data() const
{
    return (circuit !=  nullptr && circuit->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_operation() const
{
    return is_set(operation)
	|| (circuit !=  nullptr && circuit->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit")
    {
        if(circuit == nullptr)
        {
            circuit = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>();
        }
        return circuit;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit != nullptr)
    {
        children["circuit"] = circuit;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::FacilityAlarm::SeverityEnum::critical {0, "critical"};

const Enum::YLeaf Native::FacilityAlarm::ExceedActionEnum::shutdown {0, "shutdown"};

const Enum::YLeaf Native::NetworkClock::Synchronization::ModeEnum::QL_enabled {0, "QL-enabled"};


}
}

