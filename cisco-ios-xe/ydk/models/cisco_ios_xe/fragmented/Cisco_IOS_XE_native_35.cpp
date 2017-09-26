
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_35.hpp"
#include "Cisco_IOS_XE_native_36.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ip::Wccp::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::GigabitEthernet::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::IpVrf::~IpVrf()
{
}

bool Native::Interface::GigabitEthernet::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::GigabitEthernet::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::GigabitEthernet::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::GigabitEthernet::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::GigabitEthernet::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::GigabitEthernet::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::GigabitEthernet::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ipv6()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    address(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address>())
	,crypto(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Crypto>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp>())
	,flow(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Flow>())
	,nd(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd>())
	,no_pim(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::NoPim>())
	,ospf(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf>())
	,pim(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Pim>())
	,tcp(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Tcp>())
{
    address->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    flow->parent = this;
    nd->parent = this;
    no_pim->parent = this;
    ospf->parent = this;
    pim->parent = this;
    tcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::~Ipv6()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::has_data() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (address !=  nullptr && address->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(no_pim != nullptr)
    {
        children["no-pim"] = no_pim;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "crypto" || name == "destination-guard" || name == "dhcp" || name == "flow" || name == "nd" || name == "no-pim" || name == "ospf" || name == "pim" || name == "rip" || name == "tcp" || name == "traffic-filter" || name == "enable" || name == "mtu" || name == "redirects" || name == "unnumbered" || name == "unreachables")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Address::~Address()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "dhcp" || name == "link-local-address" || name == "prefix-list")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::has_data() const
{
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Crypto::Crypto()
    :
    map{YType::str, "map"}
{

    yang_name = "crypto"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Crypto::~Crypto()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Crypto::has_data() const
{
    return map.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client>())
	,guard(nullptr) // presence node
{
    client->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (client !=  nullptr && client->has_data())
	|| (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "guard" || name == "server")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Client()
    :
    request(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request>())
{
    request->parent = this;

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::~Client()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::has_data() const
{
    return (request !=  nullptr && request->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::Request()
    :
    vendor{YType::empty, "vendor"}
{

    yang_name = "request"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::~Request()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::has_data() const
{
    return vendor.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Client::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{

    yang_name = "server"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::has_data() const
{
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Dhcp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "preference")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::Flow()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{

    yang_name = "flow"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::~Flow()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return egress.is_set
	|| ingress.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "egress" || name == "ingress")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    multicast{YType::empty, "multicast"},
    output{YType::empty, "output"},
    unicast{YType::empty, "unicast"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| multicast.is_set
	|| output.is_set
	|| unicast.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        for(auto const & c : sampler)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler>();
        c->parent = this;
        sampler.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sampler)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "multicast" || name == "output" || name == "unicast")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Nd()
    :
    managed_config_flag{YType::empty, "Cisco-IOS-XE-nd:managed-config-flag"}
    	,
    autoconfig(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig>())
	,ra(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Ra>())
	,raguard(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard>())
{
    autoconfig->parent = this;
    ra->parent = this;
    raguard->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::~Nd()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::has_data() const
{
    return managed_config_flag.is_set
	|| (autoconfig !=  nullptr && autoconfig->has_data())
	|| (ra !=  nullptr && ra->has_data())
	|| (raguard !=  nullptr && raguard->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managed_config_flag.yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (ra !=  nullptr && ra->has_operation())
	|| (raguard !=  nullptr && raguard->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managed_config_flag.is_set || is_set(managed_config_flag.yfilter)) leaf_name_data.push_back(managed_config_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "ra")
    {
        if(ra == nullptr)
        {
            ra = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Ra>();
        }
        return ra;
    }

    if(child_yang_name == "raguard")
    {
        if(raguard == nullptr)
        {
            raguard = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard>();
        }
        return raguard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(ra != nullptr)
    {
        children["ra"] = ra;
    }

    if(raguard != nullptr)
    {
        children["raguard"] = raguard;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managed-config-flag")
    {
        managed_config_flag = value;
        managed_config_flag.value_namespace = name_space;
        managed_config_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managed-config-flag")
    {
        managed_config_flag.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "ra" || name == "raguard" || name == "managed-config-flag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::Autoconfig()
    :
    default_route{YType::empty, "default-route"},
    prefix{YType::empty, "prefix"}
{

    yang_name = "autoconfig"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::has_data() const
{
    return default_route.is_set
	|| prefix.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-route" || name == "prefix")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Ra()
    :
    suppress(nullptr) // presence node
{

    yang_name = "ra"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::~Ra()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:ra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::Suppress()
    :
    all{YType::empty, "all"}
{

    yang_name = "suppress"; yang_parent_name = "ra"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::~Suppress()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::has_data() const
{
    return all.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Ra::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::Raguard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "raguard"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::~Raguard()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nd:raguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Nd::Raguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::NoPim::NoPim()
    :
    pim{YType::boolean, "pim"}
{

    yang_name = "no-pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::NoPim::~NoPim()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::NoPim::has_data() const
{
    return pim.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::NoPim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::NoPim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:no-pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::NoPim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::NoPim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::NoPim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::NoPim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::NoPim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::NoPim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication>())
	,bfd(nullptr) // presence node
	,database_filter(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption>())
	,flood_reduction(nullptr) // presence node
	,mtu_ignore(nullptr) // presence node
	,network(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Network>())
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    network->parent = this;

    yang_name = "ospf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::~Ospf()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return cost.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Network>();
        }
        return network;
    }

    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Process>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    for (auto const & c : process)
    {
        children[c->get_segment_path()] = c;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "flood-reduction" || name == "mtu-ignore" || name == "neighbor" || name == "network" || name == "process" || name == "shutdown" || name == "cost" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Authentication()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Encryption()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::~Encryption()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec()
    :
    esp{YType::empty, "esp"},
    spi{YType::uint64, "spi"}
    	,
    aes_cbc(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc>())
	,ipsec_3des(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des>())
{
    aes_cbc->parent = this;
    ipsec_3des->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_data() const
{
    return esp.is_set
	|| spi.is_set
	|| (aes_cbc !=  nullptr && aes_cbc->has_data())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des>();
        }
        return ipsec_3des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_cbc != nullptr)
    {
        children["aes-cbc"] = aes_cbc;
    }

    if(ipsec_3des != nullptr)
    {
        children["ipsec_3des"] = ipsec_3des;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc" || name == "ipsec_3des" || name == "esp" || name == "spi")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_192(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192>())
	,aes_256(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256>())
	,aes_cbc_128(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128>())
{
    aes_192->parent = this;
    aes_256->parent = this;
    aes_cbc_128->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_data() const
{
    return (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(yfilter)
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_192 != nullptr)
    {
        children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        children["aes-256"] = aes_256;
    }

    if(aes_cbc_128 != nullptr)
    {
        children["aes-cbc-128"] = aes_cbc_128;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-192" || name == "aes-256" || name == "aes-cbc-128")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-256"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-cbc-128"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::Ipsec3Des()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::~Ipsec3Des()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "ipsec_3des"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::~Neighbor()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::~Network()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::Process()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    instance{YType::str, "instance"}
{

    yang_name = "process"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::~Process()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::has_data() const
{
    return id.is_set
	|| area.is_set
	|| instance.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "instance")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::~Shutdown()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Ospf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Pim::Pim()
    :
    bfd{YType::empty, "bfd"},
    dr_priority{YType::uint32, "dr-priority"}
    	,
    bsr(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr>())
{
    bsr->parent = this;

    yang_name = "pim"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Pim::~Pim()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::has_data() const
{
    return bfd.is_set
	|| dr_priority.is_set
	|| (bsr !=  nullptr && bsr->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| (bsr !=  nullptr && bsr->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr>();
        }
        return bsr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr" || name == "bfd" || name == "dr-priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::Bsr()
    :
    border{YType::empty, "border"}
{

    yang_name = "bsr"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::~Bsr()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::has_data() const
{
    return border.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Pim::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Rip::Rip()
    :
    id{YType::str, "id"},
    enable{YType::empty, "enable"}
    	,
    default_information(std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation>())
{
    default_information->parent = this;

    yang_name = "rip"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Rip::~Rip()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::has_data() const
{
    return id.is_set
	|| enable.is_set
	|| (default_information !=  nullptr && default_information->has_data());
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_information !=  nullptr && default_information->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation>();
        }
        return default_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information" || name == "id" || name == "enable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::DefaultInformation()
    :
    metric{YType::uint8, "metric"},
    route{YType::enumeration, "route"}
{

    yang_name = "default-information"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::~DefaultInformation()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::has_data() const
{
    return metric.is_set
	|| route.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::Tcp::~Tcp()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::has_data() const
{
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::GigabitEthernet::Isis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::GigabitEthernet::Isis::Advertise>())
	,authentication(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6>())
	,metric(std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric>())
	,password(std::make_shared<Native::Interface::GigabitEthernet::Isis::Password>())
	,priority(std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority>())
	,three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::~Isis()
{
}

bool Native::Interface::GigabitEthernet::Isis::has_data() const
{
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::GigabitEthernet::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::GigabitEthernet::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::GigabitEthernet::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::GigabitEthernet::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_filter != nullptr)
    {
        children["adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        children["circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        children["csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        children["hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(three_way_handshake != nullptr)
    {
        children["three-way-handshake"] = three_way_handshake;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    match_all{YType::empty, "match-all"},
    name{YType::str, "name"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_data() const
{
    return match_all.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_all.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        for(auto const & c : csnp_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Hello::~Hello()
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        for(auto const & c : hello_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        for(auto const & c : hello_multiplier_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Metric::~Metric()
{
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Password::Password()
    :
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Password::~Password()
{
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        for(auto const & c : password_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "priority"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Priority::~Priority()
{
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        for(auto const & c : priority_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Isis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::GigabitEthernet::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lisp::~Lisp()
{
}

bool Native::Interface::GigabitEthernet::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::GigabitEthernet::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::GigabitEthernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Mobility()
    :
    discover(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Discover>())
	,dynamic_eid(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid>())
	,liveness(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    dynamic_eid->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_data() const
{
    return (discover !=  nullptr && discover->has_data())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_operation() const
{
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(dynamic_eid != nullptr)
    {
        children["dynamic-eid"] = dynamic_eid;
    }

    if(liveness != nullptr)
    {
        children["liveness"] = liveness;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discover" || name == "dynamic-eid" || name == "liveness")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| ydk::is_set(nbr_proxy_reply.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.yfilter)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply = value;
        nbr_proxy_reply.value_namespace = name_space;
        nbr_proxy_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid-name" || name == "nbr-proxy-reply" || name == "requests")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{

    yang_name = "lldp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Lldp::~Lldp()
{
}

bool Native::Interface::GigabitEthernet::Lldp::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::GigabitEthernet::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "load-balancing"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_data() const
{
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Location::~Location()
{
}

bool Native::Interface::GigabitEthernet::Location::has_data() const
{
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::GigabitEthernet::Location::has_operation() const
{
    return is_set(yfilter)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::GigabitEthernet::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location_id != nullptr)
    {
        children["civic-location-id"] = civic_location_id;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic-location-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
    	,
    host(nullptr) // presence node
	,none(nullptr) // presence node
{

    yang_name = "civic-location-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_data() const
{
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_identifier.yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.yfilter)) leaf_name_data.push_back(location_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(none != nullptr)
    {
        children["none"] = none;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
        location_identifier.value_namespace = name_space;
        location_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-identifier")
    {
        location_identifier.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "none" || name == "location-identifier")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "host"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "none"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::None::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::None::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Logging::Logging()
    :
    event(std::make_shared<Native::Interface::GigabitEthernet::Logging::Event>())
{
    event->parent = this;

    yang_name = "logging"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Logging::~Logging()
{
}

bool Native::Interface::GigabitEthernet::Logging::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::GigabitEthernet::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::GigabitEthernet::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::GigabitEthernet::Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"},
    trunk_status{YType::empty, "trunk-status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Logging::Event::~Event()
{
}

bool Native::Interface::GigabitEthernet::Logging::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| trunk_status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::GigabitEthernet::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::GigabitEthernet::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::GigabitEthernet::Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "nfas-status" || name == "power-inline-status" || name == "status" || name == "trunk-status")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Logging::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Logging::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mab::~Mab()
{
}

bool Native::Interface::GigabitEthernet::Mab::has_data() const
{
    return eap.is_set;
}

bool Native::Interface::GigabitEthernet::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mac::Mac()
    :
    access_group(std::make_shared<Native::Interface::GigabitEthernet::Mac::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "mac"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mac::~Mac()
{
}

bool Native::Interface::GigabitEthernet::Mac::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Interface::GigabitEthernet::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::GigabitEthernet::Mac::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::AccessGroup()
    :
    acl_name(std::make_shared<Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName>())
{
    acl_name->parent = this;

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_data() const
{
    return (acl_name !=  nullptr && acl_name->has_data());
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (acl_name !=  nullptr && acl_name->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-name")
    {
        if(acl_name == nullptr)
        {
            acl_name = std::make_shared<Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName>();
        }
        return acl_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_name != nullptr)
    {
        children["ACL-name"] = acl_name;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACL-name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::ACLName()
    :
    acl_name{YType::str, "acl-name"},
    apply_to{YType::enumeration, "apply-to"}
{

    yang_name = "ACL-name"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::~ACLName()
{
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::has_data() const
{
    return acl_name.is_set
	|| apply_to.is_set;
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(apply_to.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (apply_to.is_set || is_set(apply_to.yfilter)) leaf_name_data.push_back(apply_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-to")
    {
        apply_to = value;
        apply_to.value_namespace = name_space;
        apply_to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "apply-to")
    {
        apply_to.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "apply-to")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Macro()
    :
    description{YType::str, "description"}
    	,
    auto_(std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto_>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Macro::~Macro()
{
}

bool Native::Interface::GigabitEthernet::Macro::has_data() const
{
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::GigabitEthernet::Macro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto_>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "description")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Auto_::Auto_()
    :
    processing{YType::boolean, "processing"}
{

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Macro::Auto_::~Auto_()
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto_::has_data() const
{
    return processing.is_set;
}

bool Native::Interface::GigabitEthernet::Macro::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter);
}

std::string Native::Interface::GigabitEthernet::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Macro::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processing")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
{

    yang_name = "macsec"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Macsec::~Macsec()
{
}

bool Native::Interface::GigabitEthernet::Macsec::has_data() const
{
    return network_link.is_set;
}

bool Native::Interface::GigabitEthernet::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_link.yfilter);
}

std::string Native::Interface::GigabitEthernet::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.yfilter)) leaf_name_data.push_back(network_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-link")
    {
        network_link = value;
        network_link.value_namespace = name_space;
        network_link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-link")
    {
        network_link.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-link")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "mdix"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mdix::~Mdix()
{
}

bool Native::Interface::GigabitEthernet::Mdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::GigabitEthernet::Mdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::Mka()
    :
    pre_shared_key(std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey>())
{
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mka::~Mka()
{
}

bool Native::Interface::GigabitEthernet::Mka::has_data() const
{
    return (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::GigabitEthernet::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "mop"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mop::~Mop()
{
}

bool Native::Interface::GigabitEthernet::Mop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::GigabitEthernet::Mop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Mpls()
    :
    ip{YType::empty, "Cisco-IOS-XE-mpls:ip"},
    mtu{YType::str, "Cisco-IOS-XE-mpls:mtu"}
    	,
    accounting(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Accounting>())
	,bgp(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Bgp>())
	,label(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Label>())
	,ldp(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng>())
{
    accounting->parent = this;
    bgp->parent = this;
    label->parent = this;
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::~Mpls()
{
}

bool Native::Interface::GigabitEthernet::Mpls::has_data() const
{
    return ip.is_set
	|| mtu.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "bgp" || name == "label" || name == "ldp" || name == "traffic-eng" || name == "ip" || name == "mtu")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Accounting::Accounting()
    :
    experimental(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental>())
{
    experimental->parent = this;

    yang_name = "accounting"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Accounting::~Accounting()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mpls::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::Experimental()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "experimental"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::~Experimental()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::Accounting::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Bgp::Bgp()
    :
    forwarding{YType::empty, "forwarding"}
{

    yang_name = "bgp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Bgp::~Bgp()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Bgp::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Label::~Label()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Label::has_data() const
{
    return protocol.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Ldp::Ldp()
    :
    discovery(std::make_shared<Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery>())
{
    discovery->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Ldp::~Ldp()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{

    yang_name = "discovery"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::~Discovery()
{
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_address.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::Ldp::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::TrafficEng()
    :
    administrative_weight{YType::uint32, "administrative-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    tunnels{YType::empty, "tunnels"}
    	,
    backup_path(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath>())
	,flooding(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding>())
	,passive_interface(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface>())
{
    backup_path->parent = this;
    flooding->parent = this;
    passive_interface->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::has_data() const
{
    return administrative_weight.is_set
	|| attribute_flags.is_set
	|| tunnels.is_set
	|| (backup_path !=  nullptr && backup_path->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative_weight.yfilter)
	|| ydk::is_set(attribute_flags.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (backup_path !=  nullptr && backup_path->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_weight.is_set || is_set(administrative_weight.yfilter)) leaf_name_data.push_back(administrative_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.yfilter)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        if(backup_path == nullptr)
        {
            backup_path = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath>();
        }
        return backup_path;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface>();
        }
        return passive_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_path != nullptr)
    {
        children["backup-path"] = backup_path;
    }

    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight = value;
        administrative_weight.value_namespace = name_space;
        administrative_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
        attribute_flags.value_namespace = name_space;
        attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight.yfilter = yfilter;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path" || name == "flooding" || name == "passive-interface" || name == "administrative-weight" || name == "attribute-flags" || name == "tunnels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::BackupPath()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "backup-path"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::~BackupPath()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::has_data() const
{
    return tunnel.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Flooding()
    :
    thresholds(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "flooding"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::~Flooding()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::has_data() const
{
    return (thresholds !=  nullptr && thresholds->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::Thresholds()
    :
    down{YType::uint8, "down"},
    up{YType::uint8, "up"}
{

    yang_name = "thresholds"; yang_parent_name = "flooding"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::~Thresholds()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::has_data() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::has_operation() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_name_datas = down.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_name_datas.begin(), down_name_datas.end());
    auto up_name_datas = up.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_name_datas.begin(), up_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down.append(value);
    }
    if(value_path == "up")
    {
        up.append(value);
    }
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::Flooding::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::PassiveInterface()
    :
    nbr_if_addr{YType::str, "nbr-if-addr"},
    nbr_te_id{YType::str, "nbr-te-id"}
    	,
    nbr_igp_id(std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId>())
{
    nbr_igp_id->parent = this;

    yang_name = "passive-interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::~PassiveInterface()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::has_data() const
{
    return nbr_if_addr.is_set
	|| nbr_te_id.is_set
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_data());
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_if_addr.yfilter)
	|| ydk::is_set(nbr_te_id.yfilter)
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_if_addr.is_set || is_set(nbr_if_addr.yfilter)) leaf_name_data.push_back(nbr_if_addr.get_name_leafdata());
    if (nbr_te_id.is_set || is_set(nbr_te_id.yfilter)) leaf_name_data.push_back(nbr_te_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-igp-id")
    {
        if(nbr_igp_id == nullptr)
        {
            nbr_igp_id = std::make_shared<Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId>();
        }
        return nbr_igp_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbr_igp_id != nullptr)
    {
        children["nbr-igp-id"] = nbr_igp_id;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr = value;
        nbr_if_addr.value_namespace = name_space;
        nbr_if_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-te-id")
    {
        nbr_te_id = value;
        nbr_te_id.value_namespace = name_space;
        nbr_te_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-te-id")
    {
        nbr_te_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-igp-id" || name == "nbr-if-addr" || name == "nbr-te-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::NbrIgpId()
    :
    isis{YType::str, "isis"},
    ospf{YType::str, "ospf"}
{

    yang_name = "nbr-igp-id"; yang_parent_name = "passive-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::~NbrIgpId()
{
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_data() const
{
    return isis.is_set
	|| ospf.is_set;
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-igp-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Negotiation::~Negotiation()
{
}

bool Native::Interface::GigabitEthernet::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::GigabitEthernet::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Ospfv3()
    :
    dead_interval{YType::uint16, "dead-interval"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost>())
	,database_filter(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Encryption>())
	,manet(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Manet>())
	,multi_area(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::MultiArea>())
	,network(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Network>())
	,prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "manet" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "process-id" || name == "dead-interval" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Ospfv3::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ospfv3::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Flow::Monitor::Sampler::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Ospf::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::Route::only {0, "only"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::Rip::DefaultInformation::Route::originate {1, "originate"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ipv6::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::ApplyTo::in {0, "in"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Mac::AccessGroup::ACLName::ApplyTo::out {1, "out"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Mpls::Label::Protocol::both {0, "both"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Mpls::Label::Protocol::ldp {1, "ldp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Mpls::Label::Protocol::tdp {2, "tdp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};


}
}

