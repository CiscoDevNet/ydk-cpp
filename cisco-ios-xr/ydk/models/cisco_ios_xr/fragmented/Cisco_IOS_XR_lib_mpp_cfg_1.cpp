
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_1.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_cfg {

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "ssh-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "telnet-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::TftpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "tftp-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::~TftpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "tftp-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::XrXml()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "xr-xml"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::~XrXml()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "xr-xml"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::Outband()
    :
    outband_vrf{YType::str, "outband-vrf"}
    	,
    interface_selection(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection>())
{
    interface_selection->parent = this;

    yang_name = "outband"; yang_parent_name = "management-plane-protection"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::~Outband()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::has_data() const
{
    return outband_vrf.is_set
	|| (interface_selection !=  nullptr && interface_selection->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outband_vrf.yfilter)
	|| (interface_selection !=  nullptr && interface_selection->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outband";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outband_vrf.is_set || is_set(outband_vrf.yfilter)) leaf_name_data.push_back(outband_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-selection")
    {
        if(interface_selection == nullptr)
        {
            interface_selection = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection>();
        }
        return interface_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_selection != nullptr)
    {
        children["interface-selection"] = interface_selection;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outband-vrf")
    {
        outband_vrf = value;
        outband_vrf.value_namespace = name_space;
        outband_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outband-vrf")
    {
        outband_vrf.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-selection" || name == "outband-vrf")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::InterfaceSelection()
    :
    all_interfaces(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces>())
	,interfaces(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces>())
{
    all_interfaces->parent = this;
    interfaces->parent = this;

    yang_name = "interface-selection"; yang_parent_name = "outband"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::~InterfaceSelection()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::has_data() const
{
    return (all_interfaces !=  nullptr && all_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::has_operation() const
{
    return is_set(yfilter)
	|| (all_interfaces !=  nullptr && all_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-interfaces")
    {
        if(all_interfaces == nullptr)
        {
            all_interfaces = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces>();
        }
        return all_interfaces;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_interfaces != nullptr)
    {
        children["all-interfaces"] = all_interfaces;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "interfaces")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllInterfaces()
    :
    all_protocols(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols>())
	,http_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol>())
	,netconf_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol>())
	,snmp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol>())
	,ssh_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol>())
	,telnet_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol>())
	,tftp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol>())
	,xr_xml(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml>())
{
    all_protocols->parent = this;
    http_protocol->parent = this;
    netconf_protocol->parent = this;
    snmp_protocol->parent = this;
    ssh_protocol->parent = this;
    telnet_protocol->parent = this;
    tftp_protocol->parent = this;
    xr_xml->parent = this;

    yang_name = "all-interfaces"; yang_parent_name = "interface-selection"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::~AllInterfaces()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::has_data() const
{
    return (all_protocols !=  nullptr && all_protocols->has_data())
	|| (http_protocol !=  nullptr && http_protocol->has_data())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_data())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_data())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_data())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_data())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_data())
	|| (xr_xml !=  nullptr && xr_xml->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| (all_protocols !=  nullptr && all_protocols->has_operation())
	|| (http_protocol !=  nullptr && http_protocol->has_operation())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_operation())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_operation())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_operation())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_operation())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_operation())
	|| (xr_xml !=  nullptr && xr_xml->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-protocols")
    {
        if(all_protocols == nullptr)
        {
            all_protocols = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols>();
        }
        return all_protocols;
    }

    if(child_yang_name == "http-protocol")
    {
        if(http_protocol == nullptr)
        {
            http_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol>();
        }
        return http_protocol;
    }

    if(child_yang_name == "netconf-protocol")
    {
        if(netconf_protocol == nullptr)
        {
            netconf_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol>();
        }
        return netconf_protocol;
    }

    if(child_yang_name == "snmp-protocol")
    {
        if(snmp_protocol == nullptr)
        {
            snmp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol>();
        }
        return snmp_protocol;
    }

    if(child_yang_name == "ssh-protocol")
    {
        if(ssh_protocol == nullptr)
        {
            ssh_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol>();
        }
        return ssh_protocol;
    }

    if(child_yang_name == "telnet-protocol")
    {
        if(telnet_protocol == nullptr)
        {
            telnet_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol>();
        }
        return telnet_protocol;
    }

    if(child_yang_name == "tftp-protocol")
    {
        if(tftp_protocol == nullptr)
        {
            tftp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol>();
        }
        return tftp_protocol;
    }

    if(child_yang_name == "xr-xml")
    {
        if(xr_xml == nullptr)
        {
            xr_xml = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml>();
        }
        return xr_xml;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_protocols != nullptr)
    {
        children["all-protocols"] = all_protocols;
    }

    if(http_protocol != nullptr)
    {
        children["http-protocol"] = http_protocol;
    }

    if(netconf_protocol != nullptr)
    {
        children["netconf-protocol"] = netconf_protocol;
    }

    if(snmp_protocol != nullptr)
    {
        children["snmp-protocol"] = snmp_protocol;
    }

    if(ssh_protocol != nullptr)
    {
        children["ssh-protocol"] = ssh_protocol;
    }

    if(telnet_protocol != nullptr)
    {
        children["telnet-protocol"] = telnet_protocol;
    }

    if(tftp_protocol != nullptr)
    {
        children["tftp-protocol"] = tftp_protocol;
    }

    if(xr_xml != nullptr)
    {
        children["xr-xml"] = xr_xml;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-protocols" || name == "http-protocol" || name == "netconf-protocol" || name == "snmp-protocol" || name == "ssh-protocol" || name == "telnet-protocol" || name == "tftp-protocol" || name == "xr-xml")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::AllProtocols()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "all-protocols"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::~AllProtocols()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "all-protocols"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::HttpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "http-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::~HttpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "http-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::NetconfProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "netconf-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::~NetconfProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "netconf-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::SnmpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "snmp-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::~SnmpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "snmp-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "ssh-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "telnet-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::TftpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "tftp-protocol"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::~TftpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "tftp-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::XrXml()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "xr-xml"; yang_parent_name = "all-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::~XrXml()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "xr-xml"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_v4 != nullptr)
    {
        children["peer-v4"] = peer_v4;
    }

    if(peer_v6 != nullptr)
    {
        children["peer-v6"] = peer_v6;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_prefixes != nullptr)
    {
        children["peer-prefixes"] = peer_prefixes;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-selection"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::~Interfaces()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    all_protocols(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols>())
	,http_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol>())
	,netconf_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol>())
	,snmp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol>())
	,ssh_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol>())
	,telnet_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol>())
	,tftp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol>())
	,xr_xml(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml>())
{
    all_protocols->parent = this;
    http_protocol->parent = this;
    netconf_protocol->parent = this;
    snmp_protocol->parent = this;
    ssh_protocol->parent = this;
    telnet_protocol->parent = this;
    tftp_protocol->parent = this;
    xr_xml->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::~Interface()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (all_protocols !=  nullptr && all_protocols->has_data())
	|| (http_protocol !=  nullptr && http_protocol->has_data())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_data())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_data())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_data())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_data())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_data())
	|| (xr_xml !=  nullptr && xr_xml->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (all_protocols !=  nullptr && all_protocols->has_operation())
	|| (http_protocol !=  nullptr && http_protocol->has_operation())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_operation())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_operation())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_operation())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_operation())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_operation())
	|| (xr_xml !=  nullptr && xr_xml->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-protocols")
    {
        if(all_protocols == nullptr)
        {
            all_protocols = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols>();
        }
        return all_protocols;
    }

    if(child_yang_name == "http-protocol")
    {
        if(http_protocol == nullptr)
        {
            http_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol>();
        }
        return http_protocol;
    }

    if(child_yang_name == "netconf-protocol")
    {
        if(netconf_protocol == nullptr)
        {
            netconf_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol>();
        }
        return netconf_protocol;
    }

    if(child_yang_name == "snmp-protocol")
    {
        if(snmp_protocol == nullptr)
        {
            snmp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol>();
        }
        return snmp_protocol;
    }

    if(child_yang_name == "ssh-protocol")
    {
        if(ssh_protocol == nullptr)
        {
            ssh_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol>();
        }
        return ssh_protocol;
    }

    if(child_yang_name == "telnet-protocol")
    {
        if(telnet_protocol == nullptr)
        {
            telnet_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol>();
        }
        return telnet_protocol;
    }

    if(child_yang_name == "tftp-protocol")
    {
        if(tftp_protocol == nullptr)
        {
            tftp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol>();
        }
        return tftp_protocol;
    }

    if(child_yang_name == "xr-xml")
    {
        if(xr_xml == nullptr)
        {
            xr_xml = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml>();
        }
        return xr_xml;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_protocols != nullptr)
    {
        children["all-protocols"] = all_protocols;
    }

    if(http_protocol != nullptr)
    {
        children["http-protocol"] = http_protocol;
    }

    if(netconf_protocol != nullptr)
    {
        children["netconf-protocol"] = netconf_protocol;
    }

    if(snmp_protocol != nullptr)
    {
        children["snmp-protocol"] = snmp_protocol;
    }

    if(ssh_protocol != nullptr)
    {
        children["ssh-protocol"] = ssh_protocol;
    }

    if(telnet_protocol != nullptr)
    {
        children["telnet-protocol"] = telnet_protocol;
    }

    if(tftp_protocol != nullptr)
    {
        children["tftp-protocol"] = tftp_protocol;
    }

    if(xr_xml != nullptr)
    {
        children["xr-xml"] = xr_xml;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-protocols" || name == "http-protocol" || name == "netconf-protocol" || name == "snmp-protocol" || name == "ssh-protocol" || name == "telnet-protocol" || name == "tftp-protocol" || name == "xr-xml" || name == "interface-name")
        return true;
    return false;
}


}
}

