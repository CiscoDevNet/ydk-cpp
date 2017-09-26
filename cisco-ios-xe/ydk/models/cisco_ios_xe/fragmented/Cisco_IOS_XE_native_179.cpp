
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_179.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::Ipv6_()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::~Ipv6_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_data() const
{
    return loopback.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::Import()
    :
    map{YType::str, "map"}
{

    yang_name = "import"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_data() const
{
    return map.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::Mdt()
    :
    mtu{YType::uint16, "mtu"}
{

    yang_name = "mdt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::~Mdt()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_data() const
{
    return mtu.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::RouteTarget()
{

    yang_name = "route-target"; yang_parent_name = "definition"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::~RouteTarget()
{
}

bool Native::Vrf::Definition::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vrf::Definition::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vrf::Definition::RouteTarget::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vrf::Definition::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vrf::Definition::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vrf::Definition::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export" || name == "import")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Export_::Export_()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::Export_::~Export_()
{
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
        return true;
    return false;
}

Native::Vrf::Definition::RouteTarget::Import::Import()
    :
    asn_ip{YType::str, "asn-ip"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vrf::Definition::RouteTarget::Import::~Import()
{
}

bool Native::Vrf::Definition::RouteTarget::Import::has_data() const
{
    return asn_ip.is_set;
}

bool Native::Vrf::Definition::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_ip.yfilter);
}

std::string Native::Vrf::Definition::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[asn-ip='" <<asn_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vrf::Definition::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_ip.is_set || is_set(asn_ip.yfilter)) leaf_name_data.push_back(asn_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vrf::Definition::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vrf::Definition::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vrf::Definition::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-ip")
    {
        asn_ip = value;
        asn_ip.value_namespace = name_space;
        asn_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vrf::Definition::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-ip")
    {
        asn_ip.yfilter = yfilter;
    }
}

bool Native::Vrf::Definition::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-ip")
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

Native::Vtp::Vtp()
    :
    domain{YType::str, "Cisco-IOS-XE-vtp:domain"},
    file{YType::str, "Cisco-IOS-XE-vtp:file"},
    pruning{YType::empty, "Cisco-IOS-XE-vtp:pruning"},
    version{YType::uint8, "Cisco-IOS-XE-vtp:version"}
    	,
    interface(std::make_shared<Native::Vtp::Interface>())
	,mode(std::make_shared<Native::Vtp::Mode>())
	,password(std::make_shared<Native::Vtp::Password>())
{
    interface->parent = this;
    mode->parent = this;
    password->parent = this;

    yang_name = "vtp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::~Vtp()
{
}

bool Native::Vtp::has_data() const
{
    return domain.is_set
	|| file.is_set
	|| pruning.is_set
	|| version.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Vtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(pruning.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Vtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (pruning.is_set || is_set(pruning.yfilter)) leaf_name_data.push_back(pruning.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Vtp::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Vtp::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Vtp::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Vtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pruning")
    {
        pruning = value;
        pruning.value_namespace = name_space;
        pruning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "pruning")
    {
        pruning.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Vtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "mode" || name == "password" || name == "domain" || name == "file" || name == "pruning" || name == "version")
        return true;
    return false;
}

Native::Vtp::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    only{YType::empty, "only"}
{

    yang_name = "interface"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Interface::~Interface()
{
}

bool Native::Vtp::Interface::has_data() const
{
    return interface_name.is_set
	|| only.is_set;
}

bool Native::Vtp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(only.yfilter);
}

std::string Native::Vtp::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (only.is_set || is_set(only.yfilter)) leaf_name_data.push_back(only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only")
    {
        only = value;
        only.value_namespace = name_space;
        only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "only")
    {
        only.yfilter = yfilter;
    }
}

bool Native::Vtp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "only")
        return true;
    return false;
}

Native::Vtp::Mode::Mode()
    :
    client(nullptr) // presence node
	,off(nullptr) // presence node
	,server(nullptr) // presence node
	,transparent(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::~Mode()
{
}

bool Native::Vtp::Mode::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (off !=  nullptr && off->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transparent !=  nullptr && transparent->has_data());
}

bool Native::Vtp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (off !=  nullptr && off->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transparent !=  nullptr && transparent->has_operation());
}

std::string Native::Vtp::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Vtp::Mode::Client>();
        }
        return client;
    }

    if(child_yang_name == "off")
    {
        if(off == nullptr)
        {
            off = std::make_shared<Native::Vtp::Mode::Off>();
        }
        return off;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Vtp::Mode::Server>();
        }
        return server;
    }

    if(child_yang_name == "transparent")
    {
        if(transparent == nullptr)
        {
            transparent = std::make_shared<Native::Vtp::Mode::Transparent>();
        }
        return transparent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(off != nullptr)
    {
        children["off"] = off;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transparent != nullptr)
    {
        children["transparent"] = transparent;
    }

    return children;
}

void Native::Vtp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vtp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vtp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "off" || name == "server" || name == "transparent")
        return true;
    return false;
}

Native::Vtp::Mode::Client::Client()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "client"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Client::~Client()
{
}

bool Native::Vtp::Mode::Client::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Off::Off()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "off"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Off::~Off()
{
}

bool Native::Vtp::Mode::Off::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Off::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Off::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Off::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Off::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Off::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Off::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Off::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Off::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Off::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Server::Server()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "server"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Server::~Server()
{
}

bool Native::Vtp::Mode::Server::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Transparent::Transparent()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "transparent"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Transparent::~Transparent()
{
}

bool Native::Vtp::Mode::Transparent::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Transparent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Transparent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Transparent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transparent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Transparent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Transparent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Transparent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Transparent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Transparent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Transparent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Password::Password()
    :
    hidden{YType::empty, "hidden"},
    password{YType::str, "password"},
    secret{YType::empty, "secret"}
{

    yang_name = "password"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Password::~Password()
{
}

bool Native::Vtp::Password::has_data() const
{
    return hidden.is_set
	|| password.is_set
	|| secret.is_set;
}

bool Native::Vtp::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hidden.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Vtp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hidden.is_set || is_set(hidden.yfilter)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hidden")
    {
        hidden = value;
        hidden.value_namespace = name_space;
        hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hidden")
    {
        hidden.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Vtp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hidden" || name == "password" || name == "secret")
        return true;
    return false;
}

Native::Wireless::Wireless()
    :
    mdns_bridging{YType::boolean, "mdns-bridging"}
{

    yang_name = "wireless"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wireless::~Wireless()
{
}

bool Native::Wireless::has_data() const
{
    return mdns_bridging.is_set;
}

bool Native::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mdns_bridging.yfilter);
}

std::string Native::Wireless::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wireless::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mdns_bridging.is_set || is_set(mdns_bridging.yfilter)) leaf_name_data.push_back(mdns_bridging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging = value;
        mdns_bridging.value_namespace = name_space;
        mdns_bridging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging.yfilter = yfilter;
    }
}

bool Native::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-bridging")
        return true;
    return false;
}

Native::Wsma::Wsma()
    :
    agent(std::make_shared<Native::Wsma::Agent>())
	,profile(std::make_shared<Native::Wsma::Profile>())
{
    agent->parent = this;
    profile->parent = this;

    yang_name = "wsma"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::~Wsma()
{
}

bool Native::Wsma::has_data() const
{
    return (agent !=  nullptr && agent->has_data())
	|| (profile !=  nullptr && profile->has_data());
}

bool Native::Wsma::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation())
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Wsma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wsma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Wsma::Agent>();
        }
        return agent;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Wsma::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Wsma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Agent()
    :
    config(std::make_shared<Native::Wsma::Agent::Config>())
	,exec(std::make_shared<Native::Wsma::Agent::Exec>())
	,filesys(std::make_shared<Native::Wsma::Agent::Filesys>())
	,notify(std::make_shared<Native::Wsma::Agent::Notify>())
{
    config->parent = this;
    exec->parent = this;
    filesys->parent = this;
    notify->parent = this;

    yang_name = "agent"; yang_parent_name = "wsma"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Agent::~Agent()
{
}

bool Native::Wsma::Agent::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (filesys !=  nullptr && filesys->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Wsma::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (filesys !=  nullptr && filesys->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Wsma::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Wsma::Agent::Config>();
        }
        return config;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Wsma::Agent::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "filesys")
    {
        if(filesys == nullptr)
        {
            filesys = std::make_shared<Native::Wsma::Agent::Filesys>();
        }
        return filesys;
    }

    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::Wsma::Agent::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(filesys != nullptr)
    {
        children["filesys"] = filesys;
    }

    if(notify != nullptr)
    {
        children["notify"] = notify;
    }

    return children;
}

void Native::Wsma::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "exec" || name == "filesys" || name == "notify")
        return true;
    return false;
}

Native::Wsma::Agent::Config::Config()
    :
    profile{YType::str, "profile"}
{

    yang_name = "config"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Agent::Config::~Config()
{
}

bool Native::Wsma::Agent::Config::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Config::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Exec::Exec()
    :
    profile{YType::str, "profile"}
{

    yang_name = "exec"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Agent::Exec::~Exec()
{
}

bool Native::Wsma::Agent::Exec::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Exec::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Filesys::Filesys()
    :
    profile{YType::str, "profile"}
{

    yang_name = "filesys"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Agent::Filesys::~Filesys()
{
}

bool Native::Wsma::Agent::Filesys::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Filesys::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Filesys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Filesys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filesys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Filesys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Filesys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Filesys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Filesys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Filesys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Filesys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Notify::Notify()
    :
    profile{YType::str, "profile"}
{

    yang_name = "notify"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Agent::Notify::~Notify()
{
}

bool Native::Wsma::Agent::Notify::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Notify::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "wsma"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Profile::~Profile()
{
}

bool Native::Wsma::Profile::has_data() const
{
    for (std::size_t index=0; index<listener.size(); index++)
    {
        if(listener[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Wsma::Profile::has_operation() const
{
    for (std::size_t index=0; index<listener.size(); index++)
    {
        if(listener[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Wsma::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listener")
    {
        for(auto const & c : listener)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Wsma::Profile::Listener>();
        c->parent = this;
        listener.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : listener)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Wsma::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Wsma::Profile::Listener::Listener()
    :
    name{YType::str, "name"},
    transport{YType::enumeration, "transport"}
{

    yang_name = "listener"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wsma::Profile::Listener::~Listener()
{
}

bool Native::Wsma::Profile::Listener::has_data() const
{
    return name.is_set
	|| transport.is_set;
}

bool Native::Wsma::Profile::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string Native::Wsma::Profile::Listener::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Profile::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Profile::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wsma::Profile::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Profile::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Profile::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wsma::Profile::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Native::Wsma::Profile::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "transport")
        return true;
    return false;
}

Native::Xconnect::Xconnect()
    :
    logging(std::make_shared<Native::Xconnect::Logging>())
{
    logging->parent = this;

    yang_name = "xconnect"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::~Xconnect()
{
}

bool Native::Xconnect::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool Native::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Xconnect::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Xconnect::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::Xconnect::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::Logging::~Logging()
{
}

bool Native::Xconnect::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::Xconnect::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::Xconnect::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::Xconnect::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::Xconnect::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::Xconnect::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::Xconnect::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::Xconnect::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Xconnect::Logging::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/Cisco-IOS-XE-l2vpn:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Xconnect::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Zone::Zone()
{

    yang_name = "zone"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Zone::~Zone()
{
}

bool Native::Zone::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Zone::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Zone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Zone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Zone::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Zone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Zone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Zone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Zone::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    protection{YType::str, "protection"}
{

    yang_name = "security"; yang_parent_name = "zone"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Zone::Security::~Security()
{
}

bool Native::Zone::Security::has_data() const
{
    return id.is_set
	|| description.is_set
	|| protection.is_set;
}

bool Native::Zone::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Zone::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Zone::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Zone::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Zone::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Zone::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Zone::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Zone::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "protection")
        return true;
    return false;
}

Native::ZonePair::ZonePair()
{

    yang_name = "zone-pair"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ZonePair::~ZonePair()
{
}

bool Native::ZonePair::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ZonePair::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ZonePair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ZonePair::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ZonePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::ZonePair::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    destination{YType::str, "destination"},
    source{YType::str, "source"}
    	,
    service_policy(std::make_shared<Native::ZonePair::Security::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "security"; yang_parent_name = "zone-pair"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ZonePair::Security::~Security()
{
}

bool Native::ZonePair::Security::has_data() const
{
    return id.is_set
	|| description.is_set
	|| destination.is_set
	|| source.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ZonePair::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ZonePair::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/zone-pair/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ZonePair::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ZonePair::Security::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::ZonePair::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id" || name == "description" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::ServicePolicy()
    :
    type(std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ZonePair::Security::ServicePolicy::~ServicePolicy()
{
}

bool Native::ZonePair::Security::ServicePolicy::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::ZonePair::Security::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::ZonePair::Security::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::ZonePair::Security::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::Security::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::Security::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::Type::Type()
    :
    inspect{YType::str, "inspect"}
{

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ZonePair::Security::ServicePolicy::Type::~Type()
{
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_data() const
{
    return inspect.is_set;
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ZonePair::Security::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ZonePair::Security::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ZonePair::Security::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect")
        return true;
    return false;
}

const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::http {0, "http"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::https {1, "https"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::ssh {2, "ssh"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::tls {3, "tls"};


}
}

