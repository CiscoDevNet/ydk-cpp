
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_47.hpp"
#include "Cisco_IOS_XE_native_49.hpp"
#include "Cisco_IOS_XE_native_52.hpp"
#include "Cisco_IOS_XE_native_48.hpp"
#include "Cisco_IOS_XE_native_51.hpp"
#include "Cisco_IOS_XE_native_50.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Overlay::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Peer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::Overlay::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::Overlay::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::~Plim()
{
}

bool Native::Interface::Overlay::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::Overlay::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::Overlay::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Overlay::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::Overlay::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::Overlay::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Overlay::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Overlay::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::Overlay::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::~Qos()
{
}

bool Native::Interface::Overlay::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Queue()
    :
    strict_priority(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority>())
	,zero(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero>())
{
    strict_priority->parent = this;
    zero->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_data() const
{
    return (strict_priority !=  nullptr && strict_priority->has_data())
	|| (zero !=  nullptr && zero->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (strict_priority !=  nullptr && strict_priority->has_operation())
	|| (zero !=  nullptr && zero->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_priority != nullptr)
    {
        children["strict-priority"] = strict_priority;
    }

    if(zero != nullptr)
    {
        children["zero"] = zero;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-priority" || name == "zero")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{

    yang_name = "pm-path"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PmPath::~PmPath()
{
}

bool Native::Interface::Overlay::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Overlay::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Overlay::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "name")
        return true;
    return false;
}

Native::Interface::Overlay::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
    	,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Pppoe::~Pppoe()
{
}

bool Native::Interface::Overlay::Pppoe::has_data() const
{
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::Overlay::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::Overlay::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::Overlay::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Interface::Overlay::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::Overlay::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::Overlay::Pppoe::Enable::has_data() const
{
    return group.is_set;
}

bool Native::Interface::Overlay::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Overlay::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Overlay::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Overlay::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Overlay::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Overlay::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Overlay::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Overlay::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Overlay::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Overlay::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos_values.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Overlay::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-values" || name == "id")
        return true;
    return false;
}

Native::Interface::Overlay::RcvQueue::RcvQueue()
{

    yang_name = "rcv-queue"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Overlay::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Overlay::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Overlay::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Overlay::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Service()
{

    yang_name = "service"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::~Service()
{
}

bool Native::Interface::Overlay::Service::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Service::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    description{YType::str, "description"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    evc_name{YType::str, "evc-name"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"},
    trunk{YType::empty, "trunk"}
    	,
    bridge_domain(std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain>())
	,cfm(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm>())
	,encapsulation(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation>())
	,errdisable(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable>())
	,ethernet_container(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer>())
	,ip(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip>())
	,ipv6(std::make_shared<Native::Interface::Overlay::Service::Instance::Ipv6>())
	,l2protocol(std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol>())
	,mac(std::make_shared<Native::Interface::Overlay::Service::Instance::Mac>())
	,rewrite(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite>())
	,service_policy(std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp>())
{
    bridge_domain->parent = this;
    cfm->parent = this;
    encapsulation->parent = this;
    errdisable->parent = this;
    ethernet_container->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    l2protocol->parent = this;
    mac->parent = this;
    rewrite->parent = this;
    service_policy->parent = this;
    snmp->parent = this;

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::~Instance()
{
}

bool Native::Interface::Overlay::Service::Instance::has_data() const
{
    return id.is_set
	|| description.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| evc_name.is_set
	|| gigabitethernet.is_set
	|| group.is_set
	|| shutdown.is_set
	|| trunk.is_set
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Interface::Overlay::Service::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ethernet_evc_name.yfilter)
	|| ydk::is_set(evc_name.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.yfilter)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.yfilter)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Overlay::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::Overlay::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        children["ethernet-container"] = ethernet_container;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(l2protocol != nullptr)
    {
        children["l2protocol"] = l2protocol;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
        ethernet_evc_name.value_namespace = name_space;
        ethernet_evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
        evc_name.value_namespace = name_space;
        evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name.yfilter = yfilter;
    }
    if(value_path == "evc-name")
    {
        evc_name.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain" || name == "cfm" || name == "encapsulation" || name == "errdisable" || name == "ethernet-container" || name == "ip" || name == "ipv6" || name == "l2protocol" || name == "mac" || name == "rewrite" || name == "service-policy" || name == "snmp" || name == "id" || name == "description" || name == "ethernet" || name == "ethernet-evc-name" || name == "evc-name" || name == "GigabitEthernet" || name == "group" || name == "shutdown" || name == "trunk")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
    	,
    split_horizon(std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::has_data() const
{
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation = value;
        from_encapsulation.value_namespace = name_space;
        from_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation>())
	,mep(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Mep>())
	,mip(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::has_data() const
{
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_data() const
{
    return cos.is_set
	|| dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dot1q" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::has_data() const
{
    return cos.is_set
	|| second_dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "second-dot1q" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mep::has_data() const
{
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mip::has_data() const
{
    return level.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
    	,
    dot1ad(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q>())
	,priority_tagged(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged>())
	,untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;
    priority_tagged->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_data() const
{
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        children["untagged"] = untagged;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"}
    	,
    cos2(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dot1q")
    {
        dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact" || name == "id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::~Cos2()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"},
    second_dot1q{YType::str, "second-dot1q"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    cos2(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "cos" || name == "etype" || name == "exact" || name == "id" || name == "second-dot1q" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::~Cos2()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
    	,
    cos_container(std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(etype.yfilter)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_container != nullptr)
    {
        children["cos-container"] = cos_container;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_data() const
{
    return false;
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    return mac_security.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi>())
	,loopback(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lmi != nullptr)
    {
        children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        children["loopback"] = loopback;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ce_vlan != nullptr)
    {
        children["ce-vlan"] = ce_vlan;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"}
    	,
    vlan_range(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>())
{
    vlan_range->parent = this;

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| (vlan_range !=  nullptr && vlan_range->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| (vlan_range !=  nullptr && vlan_range->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        if(vlan_range == nullptr)
        {
            vlan_range = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>();
        }
        return vlan_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_range != nullptr)
    {
        children["vlan-range"] = vlan_range;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged")
    {
        untagged = value;
        untagged.value_namespace = name_space;
        untagged.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "untagged")
    {
        untagged.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "any" || name == "default" || name == "untagged")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::VlanRange()
    :
    comma{YType::uint16, "comma"},
    hyphen{YType::uint16, "hyphen"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "vlan-range"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::~VlanRange()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_data() const
{
    return comma.is_set
	|| hyphen.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comma.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comma.is_set || is_set(comma.yfilter)) leaf_name_data.push_back(comma.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comma")
    {
        comma = value;
        comma.value_namespace = name_space;
        comma.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comma")
    {
        comma.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comma" || name == "hyphen" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Acl>())
	,dhcp(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp>())
	,verify(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_data() const
{
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_data() const
{
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ip::Verify::Verify()
    :
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"},
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_data() const
{
    return dhcp_snooping.is_set
	|| port_security.is_set
	|| source.is_set
	|| vlan.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
        dhcp_snooping.value_namespace = name_space;
        dhcp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping.yfilter = yfilter;
    }
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping" || name == "port-security" || name == "source" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Ipv6::Ipv6()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"},
    traffic_filter{YType::str, "traffic-filter"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_data() const
{
    return in.is_set
	|| out.is_set
	|| traffic_filter.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(traffic_filter.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
        traffic_filter.value_namespace = name_space;
        traffic_filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "traffic-filter")
    {
        traffic_filter.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "traffic-filter")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::L2Protocol()
    :
    forward(nullptr) // presence node
	,peer(nullptr) // presence node
	,tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::~L2Protocol()
{
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::has_data() const
{
    return (forward !=  nullptr && forward->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (forward !=  nullptr && forward->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::L2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward" || name == "peer" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::~Forward()
{
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::~Peer()
{
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::Overlay::Service::Instance::Mac::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::Overlay::Service::Instance::Mac::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
    	,
    maximum(std::make_shared<Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::has_data() const
{
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pop != nullptr)
    {
        children["pop"] = pop;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    mode{YType::enumeration, "mode"},
    way{YType::enumeration, "way"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return mode.is_set
	|| way.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "way")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(t1_to_1 != nullptr)
    {
        children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        children["t2-to-2"] = t2_to_2;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::ServicePolicy()
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::has_data() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        for(auto const & c : input)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy::Input>();
        c->parent = this;
        input.push_back(c);
        return c;
    }

    if(child_yang_name == "output")
    {
        for(auto const & c : output)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Service::Instance::ServicePolicy::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : input)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : output)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Overlay::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::Overlay::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_data() const
{
    return link_status.is_set;
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Overlay::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    nonegotiate{YType::empty, "nonegotiate"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"}
{

    yang_name = "speed"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Speed::~Speed()
{
}

bool Native::Interface::Overlay::Speed::has_data() const
{
    return auto_.is_set
	|| nonegotiate.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set;
}

bool Native::Interface::Overlay::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter);
}

std::string Native::Interface::Overlay::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Speed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.yfilter)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.yfilter)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.yfilter)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.yfilter)) leaf_name_data.push_back(value_10000.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
        value_10.value_namespace = name_space;
        value_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
        value_100.value_namespace = name_space;
        value_100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
        value_1000.value_namespace = name_space;
        value_1000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
        value_10000.value_namespace = name_space;
        value_10000.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Speed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
    if(value_path == "value-10")
    {
        value_10.yfilter = yfilter;
    }
    if(value_path == "value-100")
    {
        value_100.yfilter = yfilter;
    }
    if(value_path == "value-1000")
    {
        value_1000.yfilter = yfilter;
    }
    if(value_path == "value-10000")
    {
        value_10000.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "nonegotiate" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::Standby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::Overlay::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::~Standby()
{
}

bool Native::Interface::Overlay::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Overlay::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Overlay::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Overlay::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Overlay::Standby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::Overlay::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "standby-list" || name == "use-bia" || name == "bfd" || name == "mac-refresh" || name == "version")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::Delay::~Delay()
{
}

bool Native::Interface::Overlay::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Overlay::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Overlay::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(word.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text" || name == "word")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Overlay::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Overlay::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::Overlay::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Overlay::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Overlay::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Overlay::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Overlay::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Overlay::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Overlay::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Overlay::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Overlay::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Overlay::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::~StormControl()
{
}

bool Native::Interface::Overlay::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Overlay::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Overlay::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Overlay::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Overlay::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Overlay::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Action::~Action()
{
}

bool Native::Interface::Overlay::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Overlay::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Overlay::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;
    pps->parent = this;
    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Overlay::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Overlay::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Switchport::~Switchport()
{
}

bool Native::Interface::Overlay::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Overlay::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Overlay::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Overlay::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Overlay::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Overlay::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Overlay::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Overlay::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Overlay::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Overlay::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Synchronous::~Synchronous()
{
}

bool Native::Interface::Overlay::Synchronous::has_data() const
{
    return mode.is_set;
}

bool Native::Interface::Overlay::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Overlay::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::Overlay::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Trust::~Trust()
{
}

bool Native::Interface::Overlay::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Overlay::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Overlay::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Overlay::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Utd::~Utd()
{
}

bool Native::Interface::Overlay::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Overlay::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Overlay::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Overlay::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Overlay::Vrf::~Vrf()
{
}

bool Native::Interface::Overlay::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Overlay::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Overlay::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Overlay::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Overlay::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Overlay::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Overlay::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Overlay::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Overlay::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    mac_address{YType::str, "mac-address"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    nat66{YType::enumeration, "Cisco-IOS-XE-nat:nat66"},
    pc_speed{YType::enumeration, "pc-speed"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::PortChannel::AccessSession>())
	,arp(std::make_shared<Native::Interface::PortChannel::Arp>())
	,authentication(std::make_shared<Native::Interface::PortChannel::Authentication>())
	,auto_(std::make_shared<Native::Interface::PortChannel::Auto_>())
	,backup(std::make_shared<Native::Interface::PortChannel::Backup>())
	,bandwidth(std::make_shared<Native::Interface::PortChannel::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::PortChannel::Bfd>())
	,carrier_delay(std::make_shared<Native::Interface::PortChannel::CarrierDelay>())
	,cemoudp(std::make_shared<Native::Interface::PortChannel::Cemoudp>())
	,channel_group(std::make_shared<Native::Interface::PortChannel::ChannelGroup>())
	,crypto(std::make_shared<Native::Interface::PortChannel::Crypto>())
	,cts(std::make_shared<Native::Interface::PortChannel::Cts>())
	,cws_tunnel(std::make_shared<Native::Interface::PortChannel::CwsTunnel>())
	,dampening(std::make_shared<Native::Interface::PortChannel::Dampening>())
	,datalink(std::make_shared<Native::Interface::PortChannel::Datalink>())
	,domain(std::make_shared<Native::Interface::PortChannel::Domain>())
	,dot1x(std::make_shared<Native::Interface::PortChannel::Dot1X>())
	,dual_active(std::make_shared<Native::Interface::PortChannel::DualActive>())
	,encapsulation(std::make_shared<Native::Interface::PortChannel::Encapsulation>())
	,energywise(nullptr) // presence node
	,ethernet(std::make_shared<Native::Interface::PortChannel::Ethernet>())
	,fair_queue(std::make_shared<Native::Interface::PortChannel::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::PortChannel::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::PortChannel::Flowcontrol>())
	,interface_qos(std::make_shared<Native::Interface::PortChannel::InterfaceQos>())
	,ip(std::make_shared<Native::Interface::PortChannel::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::PortChannel::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::PortChannel::Ipv6>())
	,isis(std::make_shared<Native::Interface::PortChannel::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::PortChannel::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,lacp(std::make_shared<Native::Interface::PortChannel::Lacp>())
	,lisp(std::make_shared<Native::Interface::PortChannel::Lisp>())
	,load_balancing(std::make_shared<Native::Interface::PortChannel::LoadBalancing>())
	,location(std::make_shared<Native::Interface::PortChannel::Location>())
	,logging(std::make_shared<Native::Interface::PortChannel::Logging>())
	,mab(nullptr) // presence node
	,mac(std::make_shared<Native::Interface::PortChannel::Mac>())
	,macro(std::make_shared<Native::Interface::PortChannel::Macro>())
	,macsec(nullptr) // presence node
	,mdix(std::make_shared<Native::Interface::PortChannel::Mdix>())
	,mop(std::make_shared<Native::Interface::PortChannel::Mop>())
	,mpls(std::make_shared<Native::Interface::PortChannel::Mpls>())
	,negotiation(std::make_shared<Native::Interface::PortChannel::Negotiation>())
	,ospfv3(std::make_shared<Native::Interface::PortChannel::Ospfv3>())
	,peer(std::make_shared<Native::Interface::PortChannel::Peer>())
	,plim(std::make_shared<Native::Interface::PortChannel::Plim>())
	,pm_path(std::make_shared<Native::Interface::PortChannel::PmPath>())
	,port_channel(std::make_shared<Native::Interface::PortChannel::PortChannel_>())
	,pppoe(std::make_shared<Native::Interface::PortChannel::Pppoe>())
	,priority_queue(std::make_shared<Native::Interface::PortChannel::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::PortChannel::RcvQueue>())
	,service(std::make_shared<Native::Interface::PortChannel::Service>())
	,service_policy(std::make_shared<Native::Interface::PortChannel::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::PortChannel::Snmp>())
	,spanning_tree(std::make_shared<Native::Interface::PortChannel::SpanningTree>())
	,speed(std::make_shared<Native::Interface::PortChannel::Speed>())
	,srr_queue(std::make_shared<Native::Interface::PortChannel::SrrQueue>())
	,standby(std::make_shared<Native::Interface::PortChannel::Standby>())
	,storm_control(std::make_shared<Native::Interface::PortChannel::StormControl>())
	,switch_(std::make_shared<Native::Interface::PortChannel::Switch_>())
	,switchport(std::make_shared<Native::Interface::PortChannel::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::PortChannel::SwitchportConf>())
	,synchronous(std::make_shared<Native::Interface::PortChannel::Synchronous>())
	,trust(std::make_shared<Native::Interface::PortChannel::Trust>())
	,utd(std::make_shared<Native::Interface::PortChannel::Utd>())
	,vrf(std::make_shared<Native::Interface::PortChannel::Vrf>())
	,xconnect(std::make_shared<Native::Interface::PortChannel::Xconnect>())
{
    access_session->parent = this;
    arp->parent = this;
    authentication->parent = this;
    auto_->parent = this;
    backup->parent = this;
    bandwidth->parent = this;
    bfd->parent = this;
    carrier_delay->parent = this;
    cemoudp->parent = this;
    channel_group->parent = this;
    crypto->parent = this;
    cts->parent = this;
    cws_tunnel->parent = this;
    dampening->parent = this;
    datalink->parent = this;
    domain->parent = this;
    dot1x->parent = this;
    dual_active->parent = this;
    encapsulation->parent = this;
    ethernet->parent = this;
    fair_queue->parent = this;
    fair_queue_conf->parent = this;
    flowcontrol->parent = this;
    interface_qos->parent = this;
    ip->parent = this;
    ip_vrf->parent = this;
    ipv6->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    lacp->parent = this;
    lisp->parent = this;
    load_balancing->parent = this;
    location->parent = this;
    logging->parent = this;
    mac->parent = this;
    macro->parent = this;
    mdix->parent = this;
    mop->parent = this;
    mpls->parent = this;
    negotiation->parent = this;
    ospfv3->parent = this;
    peer->parent = this;
    plim->parent = this;
    pm_path->parent = this;
    port_channel->parent = this;
    pppoe->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    service->parent = this;
    service_policy->parent = this;
    snmp->parent = this;
    spanning_tree->parent = this;
    speed->parent = this;
    srr_queue->parent = this;
    standby->parent = this;
    storm_control->parent = this;
    switch_->parent = this;
    switchport->parent = this;
    switchport_conf->parent = this;
    synchronous->parent = this;
    trust->parent = this;
    utd->parent = this;
    vrf->parent = this;
    xconnect->parent = this;

    yang_name = "Port-channel"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::PortChannel::~PortChannel()
{
}

bool Native::Interface::PortChannel::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| channel_protocol.is_set
	|| delay.is_set
	|| description.is_set
	|| duplex.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| mac_address.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| nat66.is_set
	|| pc_speed.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (port_channel !=  nullptr && port_channel->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::PortChannel::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(nat66.yfilter)
	|| ydk::is_set(pc_speed.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (port_channel !=  nullptr && port_channel->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (nat66.is_set || is_set(nat66.yfilter)) leaf_name_data.push_back(nat66.get_name_leafdata());
    if (pc_speed.is_set || is_set(pc_speed.yfilter)) leaf_name_data.push_back(pc_speed.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::PortChannel::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::PortChannel::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannel::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::PortChannel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::PortChannel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::PortChannel::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::PortChannel::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::PortChannel::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::PortChannel::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::PortChannel::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::PortChannel::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::PortChannel::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::PortChannel::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::PortChannel::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::PortChannel::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::PortChannel::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannel::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::PortChannel::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannel::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::PortChannel::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::PortChannel::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::PortChannel::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "hold-queue")
    {
        for(auto const & c : hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::PortChannel::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannel::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::PortChannel::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannel::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::PortChannel::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::PortChannel::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::PortChannel::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::PortChannel::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::PortChannel::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::PortChannel::Location>();
        }
        return location;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::PortChannel::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::PortChannel::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::PortChannel::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::PortChannel::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::PortChannel::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::PortChannel::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::PortChannel::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::PortChannel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::PortChannel::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::PortChannel::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::PortChannel::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::PortChannel::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::PortChannel::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "port-channel")
    {
        if(port_channel == nullptr)
        {
            port_channel = std::make_shared<Native::Interface::PortChannel::PortChannel_>();
        }
        return port_channel;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::PortChannel::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::PortChannel::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::PortChannel::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::PortChannel::Service>();
        }
        return service;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::PortChannel::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::PortChannel::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::PortChannel::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::PortChannel::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::PortChannel::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::PortChannel::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::PortChannel::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::PortChannel::Switch_>();
        }
        return switch_;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::PortChannel::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::PortChannel::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::PortChannel::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannel::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::PortChannel::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::PortChannel::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::PortChannel::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(channel_group != nullptr)
    {
        children["channel-group"] = channel_group;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(load_balancing != nullptr)
    {
        children["load-balancing"] = load_balancing;
    }

    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(macro != nullptr)
    {
        children["macro"] = macro;
    }

    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(negotiation != nullptr)
    {
        children["negotiation"] = negotiation;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(plim != nullptr)
    {
        children["plim"] = plim;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(port_channel != nullptr)
    {
        children["port-channel"] = port_channel;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(speed != nullptr)
    {
        children["speed"] = speed;
    }

    if(srr_queue != nullptr)
    {
        children["srr-queue"] = srr_queue;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat66")
    {
        nat66 = value;
        nat66.value_namespace = name_space;
        nat66.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-speed")
    {
        pc_speed = value;
        pc_speed.value_namespace = name_space;
        pc_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "nat66")
    {
        nat66.yfilter = yfilter;
    }
    if(value_path == "pc-speed")
    {
        pc_speed.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-session" || name == "arp" || name == "authentication" || name == "auto" || name == "backup" || name == "bandwidth" || name == "bfd" || name == "carrier-delay" || name == "cemoudp" || name == "channel-group" || name == "crypto" || name == "cts" || name == "cws-tunnel" || name == "dampening" || name == "datalink" || name == "domain" || name == "dot1x" || name == "dual-active" || name == "encapsulation" || name == "energywise" || name == "ethernet" || name == "fair-queue" || name == "fair-queue-conf" || name == "flowcontrol" || name == "hold-queue" || name == "interface_qos" || name == "ip" || name == "ip-vrf" || name == "ipv6" || name == "isis" || name == "keepalive-settings" || name == "l2protocol-tunnel" || name == "lacp" || name == "lisp" || name == "load-balancing" || name == "location" || name == "logging" || name == "mab" || name == "mac" || name == "macro" || name == "macsec" || name == "mdix" || name == "mop" || name == "mpls" || name == "negotiation" || name == "ospfv3" || name == "peer" || name == "plim" || name == "pm-path" || name == "port-channel" || name == "pppoe" || name == "priority-queue" || name == "rcv-queue" || name == "service" || name == "service-policy" || name == "snmp" || name == "spanning-tree" || name == "speed" || name == "srr-queue" || name == "standby" || name == "storm-control" || name == "switch" || name == "switchport" || name == "switchport-conf" || name == "synchronous" || name == "trust" || name == "utd" || name == "vlan-range" || name == "vrf" || name == "xconnect" || name == "name" || name == "channel-protocol" || name == "delay" || name == "description" || name == "duplex" || name == "if-state" || name == "keepalive" || name == "load-interval" || name == "mac-address" || name == "max-reserved-bandwidth" || name == "mtu" || name == "nat66" || name == "pc-speed" || name == "service-insertion" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::PortChannel::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::PortChannel::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::AccessSession::~AccessSession()
{
}

bool Native::Interface::PortChannel::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::PortChannel::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::PortChannel::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::PortChannel::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::PortChannel::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::PortChannel::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::PortChannel::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::PortChannel::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::PortChannel::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Arp::~Arp()
{
}

bool Native::Interface::PortChannel::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::PortChannel::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::PortChannel::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    periodic{YType::empty, "periodic"},
    port_control{YType::enumeration, "port-control"},
    violation{YType::enumeration, "violation"}
    	,
    event(std::make_shared<Native::Interface::PortChannel::Authentication::Event>())
	,order(std::make_shared<Native::Interface::PortChannel::Authentication::Order>())
	,priority(std::make_shared<Native::Interface::PortChannel::Authentication::Priority>())
	,timer(std::make_shared<Native::Interface::PortChannel::Authentication::Timer>())
{
    event->parent = this;
    order->parent = this;
    priority->parent = this;
    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Authentication::has_data() const
{
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| periodic.is_set
	|| port_control.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::PortChannel::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_direction.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(open.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(port_control.yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.yfilter)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.yfilter)) leaf_name_data.push_back(open.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.yfilter)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::PortChannel::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::PortChannel::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::PortChannel::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::PortChannel::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(order != nullptr)
    {
        children["order"] = order;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
        control_direction.value_namespace = name_space;
        control_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open")
    {
        open = value;
        open.value_namespace = name_space;
        open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-control")
    {
        port_control = value;
        port_control.value_namespace = name_space;
        port_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-direction")
    {
        control_direction.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "open")
    {
        open.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "port-control")
    {
        port_control.yfilter = yfilter;
    }
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "order" || name == "priority" || name == "timer" || name == "control-direction" || name == "fallback" || name == "host-mode" || name == "open" || name == "periodic" || name == "port-control" || name == "violation")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Event()
    :
    fail(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail>())
	,no_response(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse>())
	,server(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server>())
{
    fail->parent = this;
    no_response->parent = this;
    server->parent = this;

    yang_name = "event"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::~Event()
{
}

bool Native::Interface::PortChannel::Authentication::Event::has_data() const
{
    return (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::has_operation() const
{
    return is_set(yfilter)
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fail != nullptr)
    {
        children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        children["no-response"] = no_response;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail" || name == "no-response" || name == "server")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Event::Fail::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::NoResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Event::NoResponse::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive>())
	,dead(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead>())
{
    alive->parent = this;
    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::has_data() const
{
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::has_operation() const
{
    return is_set(yfilter)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alive != nullptr)
    {
        children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        children["dead"] = dead;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alive" || name == "dead")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{

    yang_name = "action"; yang_parent_name = "alive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::has_data() const
{
    return reinitialize.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinitialize.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.yfilter)) leaf_name_data.push_back(reinitialize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
        reinitialize.value_namespace = name_space;
        reinitialize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinitialize")
    {
        reinitialize.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Alive::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinitialize")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
	,reinitialize(std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::has_data() const
{
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorize != nullptr)
    {
        children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        children["reinitialize"] = reinitialize;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize" || name == "reinitialize")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(voice.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "voice")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "reinitialize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    return vlan.is_set;
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Event::Server::Dead::Action::Reinitialize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "order"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Order::~Order()
{
}

bool Native::Interface::PortChannel::Authentication::Order::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::PortChannel::Authentication::Order::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Order::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Order::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Order::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Order::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "priority"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Priority::~Priority()
{
}

bool Native::Interface::PortChannel::Authentication::Priority::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::PortChannel::Authentication::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
    	,
    inactivity(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity>())
	,reauthenticate(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Reauthenticate>())
{
    inactivity->parent = this;
    reauthenticate->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Timer::~Timer()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::has_data() const
{
    return restart.is_set
	|| (inactivity !=  nullptr && inactivity->has_data())
	|| (reauthenticate !=  nullptr && reauthenticate->has_data());
}

bool Native::Interface::PortChannel::Authentication::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (inactivity !=  nullptr && inactivity->has_operation())
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity != nullptr)
    {
        children["inactivity"] = inactivity;
    }

    if(reauthenticate != nullptr)
    {
        children["reauthenticate"] = reauthenticate;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity" || name == "reauthenticate" || name == "restart")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Inactivity()
    :
    server(nullptr) // presence node
	,value_(std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_>())
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::PortChannel::Authentication::Timer::Inactivity::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "server"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::has_data() const
{
    return dynamic.is_set;
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Authentication::Timer::Inactivity::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Overlay::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Dot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::SecondDot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::L2Protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Overlay::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Overlay::Standby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Overlay::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Overlay::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Overlay::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::PortChannel::PcSpeed::Y_10 {0, "10"};
const Enum::YLeaf Native::Interface::PortChannel::PcSpeed::Y_100 {1, "100"};
const Enum::YLeaf Native::Interface::PortChannel::PcSpeed::Y_1000 {2, "1000"};
const Enum::YLeaf Native::Interface::PortChannel::PcSpeed::nonegotiate {3, "nonegotiate"};
const Enum::YLeaf Native::Interface::PortChannel::PcSpeed::auto_ {4, "auto"};

const Enum::YLeaf Native::Interface::PortChannel::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::PortChannel::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::PortChannel::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::PortChannel::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::PortChannel::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannel::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::PortChannel::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::PortChannel::Nat66::inside {0, "inside"};
const Enum::YLeaf Native::Interface::PortChannel::Nat66::outside {1, "outside"};

const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::ControlDirection::both {0, "both"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::ControlDirection::in {1, "in"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControl::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControl::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::PortControl::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::PortChannel::Authentication::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::Violation::replace {1, "replace"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::Violation::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::PortChannel::Authentication::Violation::shutdown {3, "shutdown"};


}
}

