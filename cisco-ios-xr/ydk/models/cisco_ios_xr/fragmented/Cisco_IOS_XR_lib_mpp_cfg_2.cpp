
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_cfg {

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::AllProtocols()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "all-protocols"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::~AllProtocols()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "all-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::HttpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "http-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::~HttpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "http-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::NetconfProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "netconf-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::~NetconfProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "netconf-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::SnmpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "snmp-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::~SnmpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "snmp-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "ssh-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "telnet-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::TftpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "tftp-protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::~TftpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "tftp-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::XrXml()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>())
{
    peer_class->parent = this;

    yang_name = "xr-xml"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::~XrXml()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::has_operation() const
{
    return is_set(yfilter)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-class")
    {
        if(peer_class == nullptr)
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>();
        }
        return peer_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_class != nullptr)
    {
        children["peer-class"] = peer_class;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-class")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    peer_v6->parent = this;

    yang_name = "peer-class"; yang_parent_name = "xr-xml"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_all.yfilter)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.yfilter)) leaf_name_data.push_back(peer_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 == nullptr)
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>();
        }
        return peer_v4;
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 == nullptr)
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>();
        }
        return peer_v6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
        peer_all.value_namespace = name_space;
        peer_all.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-all")
    {
        peer_all.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-v4" || name == "peer-v6" || name == "peer-all")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v4"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v4"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    peers->parent = this;

    yang_name = "peer-v6"; yang_parent_name = "peer-class"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_operation() const
{
    return is_set(yfilter)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes == nullptr)
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>();
        }
        return peer_prefixes;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_children() const
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

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefixes" || name == "peers")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{

    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{

    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_prefix.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.yfilter)) leaf_name_data.push_back(address_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
        address_prefix.value_namespace = name_space;
        address_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-prefix")
    {
        address_prefix.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-prefix")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "peer-v6"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}


}
}

