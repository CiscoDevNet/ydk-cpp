
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_27.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Fastethernet::Service::Instance::Ip::Verify::Verify()
    :
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"},
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "verify"; yang_parent_name = "ip";
}

Native::Interface::Fastethernet::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Ip::Verify::has_data() const
{
    return dhcp_snooping.is_set
	|| port_security.is_set
	|| source.is_set
	|| vlan.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping" || name == "port-security" || name == "source" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Ipv6::Ipv6()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"},
    traffic_filter{YType::str, "traffic-filter"}
{
    yang_name = "ipv6"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Ipv6::has_data() const
{
    return in.is_set
	|| out.is_set
	|| traffic_filter.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(traffic_filter.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "traffic-filter")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rewrite' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;

    push->parent = this;

    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    mode{YType::enumeration, "mode"},
    way{YType::enumeration, "way"}
{
    yang_name = "pop"; yang_parent_name = "tag";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return mode.is_set
	|| way.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "way")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "push"; yang_parent_name = "tag";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;

    t1_to_2->parent = this;

    t2_to_1->parent = this;

    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Translate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t1-to-1"; yang_parent_name = "translate";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{
    yang_name = "t1-to-2"; yang_parent_name = "translate";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t2-to-1"; yang_parent_name = "translate";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T2To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{
    yang_name = "t2-to-2"; yang_parent_name = "translate";
}

Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T2To2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Errdisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Errdisable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable";
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{
    yang_name = "cause"; yang_parent_name = "recovery";
}

Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    return mac_security.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi>())
	,loopback(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;

    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ce_vlan != nullptr)
    {
        children["ce-vlan"] = ce_vlan;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CeVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"}
    	,
    vlan_range(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>())
{
    vlan_range->parent = this;

    yang_name = "map"; yang_parent_name = "ce-vlan";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| (vlan_range !=  nullptr && vlan_range->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| (vlan_range !=  nullptr && vlan_range->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        if(vlan_range == nullptr)
        {
            vlan_range = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>();
        }
        return vlan_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_range != nullptr)
    {
        children["vlan-range"] = vlan_range;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "any" || name == "default" || name == "untagged")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::VlanRange()
    :
    comma{YType::uint16, "comma"},
    hyphen{YType::uint16, "hyphen"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "vlan-range"; yang_parent_name = "map";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::~VlanRange()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_data() const
{
    return comma.is_set
	|| hyphen.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comma.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comma.is_set || is_set(comma.yfilter)) leaf_name_data.push_back(comma.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comma" || name == "hyphen" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loopback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{
    yang_name = "permit"; yang_parent_name = "loopback";
}

Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Snmp::Trap>())
{
    ifindex->parent = this;

    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Snmp::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{
    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::has_data() const
{
    return link_status.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp";
}

Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifindex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
    	,
    split_horizon(std::make_shared<Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::has_data() const
{
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{
    yang_name = "split-horizon"; yang_parent_name = "bridge-domain";
}

Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizon' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
{
    yang_name = "mac"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Mac::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
    	,
    maximum(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac";
}

Native::Interface::Fastethernet::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::has_data() const
{
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Mac::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{
    yang_name = "maximum"; yang_parent_name = "security";
}

Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::ServicePolicy()
{
    yang_name = "service-policy"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::has_data() const
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

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::has_operation() const
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

std::string Native::Interface::Fastethernet::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input>();
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation>())
	,mep(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Mep>())
	,mip(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;

    mep->parent = this;

    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q>())
{
    dot1ad->parent = this;

    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::has_data() const
{
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1ad"; yang_parent_name = "encapsulation";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_data() const
{
    return cos.is_set
	|| dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Ad' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dot1q" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1q"; yang_parent_name = "encapsulation";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::has_data() const
{
    return cos.is_set
	|| second_dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "second-dot1q" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{
    yang_name = "mep"; yang_parent_name = "cfm";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::has_data() const
{
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{
    yang_name = "mip"; yang_parent_name = "cfm";
}

Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::has_data() const
{
    return level.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::L2Protocol()
    :
    forward(nullptr) // presence node
	,peer(nullptr) // presence node
	,tunnel(nullptr) // presence node
{
    yang_name = "l2protocol"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::~L2Protocol()
{
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::has_data() const
{
    return (forward !=  nullptr && forward->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (forward !=  nullptr && forward->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::L2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::L2Protocol::get_children() const
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

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward" || name == "peer" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "peer"; yang_parent_name = "l2protocol";
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::~Peer()
{
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "forward"; yang_parent_name = "l2protocol";
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::~Forward()
{
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forward' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "tunnel"; yang_parent_name = "l2protocol";
}

Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    mtu{YType::uint32, "mtu"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    vcid{YType::uint32, "vcid"}
    	,
    backup(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::~Xconnect()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| mtu.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| vcid.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "encapsulation" || name == "manual" || name == "mtu" || name == "pw-class" || name == "sequencing" || name == "vcid")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay>())
	,peer(std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer>())
{
    delay->parent = this;

    peer->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect";
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "peer")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    priority{YType::uint8, "priority"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "peer"; yang_parent_name = "backup";
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| priority.is_set
	|| pw_class.is_set
	|| vcid.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "priority" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::Delay()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "delay"; yang_parent_name = "backup";
}

Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::get_entity_path(Entity* ancestor) const
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

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "instance";
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect-pw-class";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XconnectPwClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    pw_class{YType::str, "pw-class"},
    vcid{YType::uint32, "vcid"}
    	,
    udp(std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class";
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| pw_class.is_set
	|| vcid.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "pw-class" || name == "vcid")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect";
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{
    yang_name = "port"; yang_parent_name = "udp";
}

Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::Fastethernet::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequence{YType::enumeration, "sequence"},
    vcid{YType::uint32, "vcid"}
{
    yang_name = "xconnect"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Xconnect::~Xconnect()
{
}

bool Native::Interface::Fastethernet::Xconnect::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequence.is_set
	|| vcid.is_set;
}

bool Native::Interface::Fastethernet::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(vcid.yfilter);
}

std::string Native::Interface::Fastethernet::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequence" || name == "vcid")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
    	,
    tlv(std::make_shared<Native::Interface::Fastethernet::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Cdp::~Cdp()
{
}

bool Native::Interface::Fastethernet::Cdp::has_data() const
{
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::Fastethernet::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::Fastethernet::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cdp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::Fastethernet::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::Interface::Fastethernet::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cdp::Tlv::Tlv()
    :
    location{YType::empty, "location"},
    server_location{YType::empty, "server-location"}
    	,
    app(nullptr) // presence node
{
    yang_name = "tlv"; yang_parent_name = "cdp";
}

Native::Interface::Fastethernet::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::Fastethernet::Cdp::Tlv::has_data() const
{
    return location.is_set
	|| server_location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::Fastethernet::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::Fastethernet::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cdp::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::Fastethernet::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(app != nullptr)
    {
        children["app"] = app;
    }

    return children;
}

void Native::Interface::Fastethernet::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "location" || name == "server-location")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{
    yang_name = "app"; yang_parent_name = "tlv";
}

Native::Interface::Fastethernet::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::Fastethernet::Cdp::Tlv::App::has_data() const
{
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::Fastethernet::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cdp::Tlv::App::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'App' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlvtype")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::Fastethernet::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::Fastethernet::Snmp::Trap>())
{
    ifindex->parent = this;

    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Snmp::~Snmp()
{
}

bool Native::Interface::Fastethernet::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::Fastethernet::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::Fastethernet::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Fastethernet::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Fastethernet::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::get_children() const
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

void Native::Interface::Fastethernet::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Ifindex::Ifindex()
    :
    clear{YType::boolean, "clear"},
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp";
}

Native::Interface::Fastethernet::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Fastethernet::Snmp::Ifindex::has_data() const
{
    return clear.is_set
	|| persist.is_set;
}

bool Native::Interface::Fastethernet::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Fastethernet::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifindex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "persist")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
    	,
    link_status_capas(std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Interface::Fastethernet::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::has_data() const
{
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::Fastethernet::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::Fastethernet::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status_capas != nullptr)
    {
        children["link-status-capas"] = link_status_capas;
    }

    return children;
}

void Native::Interface::Fastethernet::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap";
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatusCapas' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas";
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{
    yang_name = "permit"; yang_parent_name = "link-status";
}

Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    return duplicates.is_set;
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::Fastethernet::Crypto::Crypto()
    :
    ipsec(std::make_shared<Native::Interface::Fastethernet::Crypto::Ipsec>())
	,map(std::make_shared<Native::Interface::Fastethernet::Crypto::Map>())
{
    ipsec->parent = this;

    map->parent = this;

    yang_name = "crypto"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Crypto::~Crypto()
{
}

bool Native::Interface::Fastethernet::Crypto::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::Fastethernet::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Fastethernet::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Crypto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crypto' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Fastethernet::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Fastethernet::Crypto::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Fastethernet::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "map")
        return true;
    return false;
}

Native::Interface::Fastethernet::Crypto::Map::Map()
    :
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"},
    tag{YType::str, "tag"}
{
    yang_name = "map"; yang_parent_name = "crypto";
}

Native::Interface::Fastethernet::Crypto::Map::~Map()
{
}

bool Native::Interface::Fastethernet::Crypto::Map::has_data() const
{
    return redundancy.is_set
	|| stateful.is_set
	|| tag.is_set;
}

bool Native::Interface::Fastethernet::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Fastethernet::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Crypto::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "stateful" || name == "tag")
        return true;
    return false;
}

Native::Interface::Fastethernet::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{
    yang_name = "ipsec"; yang_parent_name = "crypto";
}

Native::Interface::Fastethernet::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Fastethernet::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Fastethernet::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::Fastethernet::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Crypto::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Cts()
    :
    manual(nullptr) // presence node
	,role_based(std::make_shared<Native::Interface::Fastethernet::Cts::RoleBased>())
{
    role_based->parent = this;

    yang_name = "cts"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Cts::~Cts()
{
}

bool Native::Interface::Fastethernet::Cts::has_data() const
{
    return (manual !=  nullptr && manual->has_data())
	|| (role_based !=  nullptr && role_based->has_data());
}

bool Native::Interface::Fastethernet::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::Fastethernet::Cts::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Interface::Fastethernet::Cts::RoleBased>();
        }
        return role_based;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    if(role_based != nullptr)
    {
        children["role-based"] = role_based;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual" || name == "role-based")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Policy>())
	,propagate(std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Propagate>())
	,sap(std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap>())
{
    policy->parent = this;

    propagate->parent = this;

    sap->parent = this;

    yang_name = "manual"; yang_parent_name = "cts";
}

Native::Interface::Fastethernet::Cts::Manual::~Manual()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (propagate !=  nullptr && propagate->has_data())
	|| (sap !=  nullptr && sap->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation())
	|| (sap !=  nullptr && sap->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manual' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap>();
        }
        return sap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "propagate" || name == "sap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Policy::Static_>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual";
}

Native::Interface::Fastethernet::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Policy::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::Static_()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{
    yang_name = "static"; yang_parent_name = "policy";
}

Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::~Static_()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::Manual::Policy::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Sap()
{
    yang_name = "sap"; yang_parent_name = "manual";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{
    yang_name = "mode-list"; yang_parent_name = "pmk";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{
    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GcmEncrypt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{
    yang_name = "gmac"; yang_parent_name = "gcm-encrypt";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{
    yang_name = "no-encap"; yang_parent_name = "mode-list";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoEncap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{
    yang_name = "gmac"; yang_parent_name = "no-encap";
}

Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{
    yang_name = "propagate"; yang_parent_name = "manual";
}

Native::Interface::Fastethernet::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Fastethernet::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::Fastethernet::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Fastethernet::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::Manual::Propagate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::RoleBased::RoleBased()
    :
    enforcement{YType::empty, "enforcement"},
    sgt_cache{YType::enumeration, "sgt-cache"}
    	,
    sgt_map(std::make_shared<Native::Interface::Fastethernet::Cts::RoleBased::SgtMap>())
{
    sgt_map->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts";
}

Native::Interface::Fastethernet::Cts::RoleBased::~RoleBased()
{
}

bool Native::Interface::Fastethernet::Cts::RoleBased::has_data() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enforcement.is_set
	|| (sgt_map !=  nullptr && sgt_map->has_data());
}

bool Native::Interface::Fastethernet::Cts::RoleBased::has_operation() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enforcement.yfilter)
	|| ydk::is_set(sgt_cache.yfilter)
	|| (sgt_map !=  nullptr && sgt_map->has_operation());
}

std::string Native::Interface::Fastethernet::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-based";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::RoleBased::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoleBased' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    auto sgt_cache_name_datas = sgt_cache.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sgt_cache_name_datas.begin(), sgt_cache_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        if(sgt_map == nullptr)
        {
            sgt_map = std::make_shared<Native::Interface::Fastethernet::Cts::RoleBased::SgtMap>();
        }
        return sgt_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sgt_map != nullptr)
    {
        children["sgt-map"] = sgt_map;
    }

    return children;
}

void Native::Interface::Fastethernet::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enforcement")
    {
        enforcement = value;
        enforcement.value_namespace = name_space;
        enforcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt-cache")
    {
        sgt_cache.append(value);
    }
}

void Native::Interface::Fastethernet::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enforcement")
    {
        enforcement.yfilter = yfilter;
    }
    if(value_path == "sgt-cache")
    {
        sgt_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map" || name == "enforcement" || name == "sgt-cache")
        return true;
    return false;
}

Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::SgtMap()
    :
    security_group{YType::str, "security-group"},
    sgt{YType::uint16, "sgt"}
{
    yang_name = "sgt-map"; yang_parent_name = "role-based";
}

Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::has_data() const
{
    return security_group.is_set
	|| sgt.is_set;
}

bool Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_group.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SgtMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_group.is_set || is_set(security_group.yfilter)) leaf_name_data.push_back(security_group.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-group")
    {
        security_group = value;
        security_group.value_namespace = name_space;
        security_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-group")
    {
        security_group.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "sgt")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Dot1X()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
    	,
    authenticator(std::make_shared<Native::Interface::Fastethernet::Dot1X::Authenticator>())
	,supplicant(std::make_shared<Native::Interface::Fastethernet::Dot1X::Supplicant>())
	,timeout(std::make_shared<Native::Interface::Fastethernet::Dot1X::Timeout>())
{
    authenticator->parent = this;

    supplicant->parent = this;

    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Dot1X::~Dot1X()
{
}

bool Native::Interface::Fastethernet::Dot1X::has_data() const
{
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::Fastethernet::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credentials.yfilter)
	|| ydk::is_set(max_reauth_req.yfilter)
	|| ydk::is_set(max_req.yfilter)
	|| ydk::is_set(max_start.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (authenticator !=  nullptr && authenticator->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Interface::Fastethernet::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1X' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.yfilter)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::Fastethernet::Dot1X::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::Fastethernet::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::Fastethernet::Dot1X::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authenticator != nullptr)
    {
        children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Interface::Fastethernet::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credentials")
    {
        credentials = value;
        credentials.value_namespace = name_space;
        credentials.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
        max_reauth_req.value_namespace = name_space;
        max_reauth_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req")
    {
        max_req = value;
        max_req.value_namespace = name_space;
        max_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-start")
    {
        max_start = value;
        max_start.value_namespace = name_space;
        max_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credentials")
    {
        credentials.yfilter = yfilter;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req.yfilter = yfilter;
    }
    if(value_path == "max-req")
    {
        max_req.yfilter = yfilter;
    }
    if(value_path == "max-start")
    {
        max_start.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticator" || name == "supplicant" || name == "timeout" || name == "credentials" || name == "max-reauth-req" || name == "max-req" || name == "max-start" || name == "pae")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::Fastethernet::Dot1X::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x";
}

Native::Interface::Fastethernet::Dot1X::Authenticator::~Authenticator()
{
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::Fastethernet::Dot1X::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::Authenticator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authenticator' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::Fastethernet::Dot1X::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::Fastethernet::Dot1X::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Dot1X::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{
    yang_name = "eap"; yang_parent_name = "authenticator";
}

Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Dot1X::Authenticator::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::Fastethernet::Dot1X::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x";
}

Native::Interface::Fastethernet::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::Fastethernet::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::Supplicant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Supplicant' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::Fastethernet::Dot1X::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::Fastethernet::Dot1X::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Dot1X::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{
    yang_name = "eap"; yang_parent_name = "supplicant";
}

Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Dot1X::Supplicant::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::Fastethernet::Dot1X::Timeout::Timeout()
    :
    auth_period{YType::uint16, "auth-period"},
    held_period{YType::uint16, "held-period"},
    quiet_period{YType::uint16, "quiet-period"},
    ratelimit_period{YType::uint16, "ratelimit-period"},
    server_timeout{YType::uint16, "server-timeout"},
    start_period{YType::uint16, "start-period"},
    supp_timeout{YType::uint16, "supp-timeout"},
    tx_period{YType::uint16, "tx-period"}
{
    yang_name = "timeout"; yang_parent_name = "dot1x";
}

Native::Interface::Fastethernet::Dot1X::Timeout::~Timeout()
{
}

bool Native::Interface::Fastethernet::Dot1X::Timeout::has_data() const
{
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::Fastethernet::Dot1X::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_period.yfilter)
	|| ydk::is_set(held_period.yfilter)
	|| ydk::is_set(quiet_period.yfilter)
	|| ydk::is_set(ratelimit_period.yfilter)
	|| ydk::is_set(server_timeout.yfilter)
	|| ydk::is_set(start_period.yfilter)
	|| ydk::is_set(supp_timeout.yfilter)
	|| ydk::is_set(tx_period.yfilter);
}

std::string Native::Interface::Fastethernet::Dot1X::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Dot1X::Timeout::get_entity_path(Entity* ancestor) const
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

    if (auth_period.is_set || is_set(auth_period.yfilter)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.yfilter)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (quiet_period.is_set || is_set(quiet_period.yfilter)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (ratelimit_period.is_set || is_set(ratelimit_period.yfilter)) leaf_name_data.push_back(ratelimit_period.get_name_leafdata());
    if (server_timeout.is_set || is_set(server_timeout.yfilter)) leaf_name_data.push_back(server_timeout.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.yfilter)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.yfilter)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Dot1X::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Dot1X::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Dot1X::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
        auth_period.value_namespace = name_space;
        auth_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-period")
    {
        held_period = value;
        held_period.value_namespace = name_space;
        held_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quiet-period")
    {
        quiet_period = value;
        quiet_period.value_namespace = name_space;
        quiet_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period = value;
        ratelimit_period.value_namespace = name_space;
        ratelimit_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-timeout")
    {
        server_timeout = value;
        server_timeout.value_namespace = name_space;
        server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-period")
    {
        start_period = value;
        start_period.value_namespace = name_space;
        start_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
        supp_timeout.value_namespace = name_space;
        supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Dot1X::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-period")
    {
        auth_period.yfilter = yfilter;
    }
    if(value_path == "held-period")
    {
        held_period.yfilter = yfilter;
    }
    if(value_path == "quiet-period")
    {
        quiet_period.yfilter = yfilter;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period.yfilter = yfilter;
    }
    if(value_path == "server-timeout")
    {
        server_timeout.yfilter = yfilter;
    }
    if(value_path == "start-period")
    {
        start_period.yfilter = yfilter;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout.yfilter = yfilter;
    }
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Dot1X::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "quiet-period" || name == "ratelimit-period" || name == "server-timeout" || name == "start-period" || name == "supp-timeout" || name == "tx-period")
        return true;
    return false;
}

Native::Interface::Fastethernet::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::Fastethernet::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Performance::~Performance()
{
}

bool Native::Interface::Fastethernet::Performance::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::Fastethernet::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::Fastethernet::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Performance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Performance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Fastethernet::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::Fastethernet::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::Fastethernet::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{
    yang_name = "monitor"; yang_parent_name = "performance";
}

Native::Interface::Fastethernet::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::Fastethernet::Performance::Monitor::has_data() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Fastethernet::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Native::Interface::Fastethernet::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Performance::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Native::Interface::Fastethernet::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Fastethernet::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Fastethernet::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Fastethernet::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;

    performance_monitor->parent = this;

    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::Interface::Fastethernet::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{
    yang_name = "control"; yang_parent_name = "type";
}

Native::Interface::Fastethernet::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Control' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "performance-monitor"; yang_parent_name = "type";
}

Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type";
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-chain";
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-chain";
}

Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Lisp::~Lisp()
{
}

bool Native::Interface::Fastethernet::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Fastethernet::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Fastethernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::Fastethernet::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lisp::Mobility::Mobility()
    :
    discover(std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::Discover>())
	,dynamic_eid(std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid>())
	,liveness(std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::Liveness>())
{
    discover->parent = this;

    dynamic_eid->parent = this;

    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp";
}

Native::Interface::Fastethernet::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Fastethernet::Lisp::Mobility::has_data() const
{
    return (discover !=  nullptr && discover->has_data())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Fastethernet::Lisp::Mobility::has_operation() const
{
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Fastethernet::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lisp::Mobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobility' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Fastethernet::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lisp::Mobility::get_children() const
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

void Native::Interface::Fastethernet::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discover" || name == "dynamic-eid" || name == "liveness")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{
    yang_name = "dynamic-eid"; yang_parent_name = "mobility";
}

Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| ydk::is_set(nbr_proxy_reply.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicEid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.yfilter)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid-name" || name == "nbr-proxy-reply" || name == "requests")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{
    yang_name = "discover"; yang_parent_name = "mobility";
}

Native::Interface::Fastethernet::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Fastethernet::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::Fastethernet::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::Fastethernet::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lisp::Mobility::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{
    yang_name = "liveness"; yang_parent_name = "mobility";
}

Native::Interface::Fastethernet::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Fastethernet::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Fastethernet::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::Fastethernet::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lisp::Mobility::Liveness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Liveness' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::Fastethernet::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{
    yang_name = "lldp"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Lldp::~Lldp()
{
}

bool Native::Interface::Fastethernet::Lldp::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::Fastethernet::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::Fastethernet::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::Fastethernet::Mka::Mka()
    :
    pre_shared_key(std::make_shared<Native::Interface::Fastethernet::Mka::PreSharedKey>())
{
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Mka::~Mka()
{
}

bool Native::Interface::Fastethernet::Mka::has_data() const
{
    return (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::Fastethernet::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::Fastethernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Mka::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mka' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::Fastethernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    return children;
}

void Native::Interface::Fastethernet::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::Fastethernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka";
}

Native::Interface::Fastethernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::Fastethernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Mka::PreSharedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreSharedKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::Fastethernet::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "pre-shared-key";
}

Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::Ospfv3()
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
    authentication(std::make_shared<Native::Interface::Fastethernet::Ospfv3::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Fastethernet::Ospfv3::Cost>())
	,database_filter(std::make_shared<Native::Interface::Fastethernet::Ospfv3::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::Fastethernet::Ospfv3::Encryption>())
	,manet(std::make_shared<Native::Interface::Fastethernet::Ospfv3::Manet>())
	,multi_area(std::make_shared<Native::Interface::Fastethernet::Ospfv3::MultiArea>())
	,network(std::make_shared<Native::Interface::Fastethernet::Ospfv3::Network>())
	,prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    encryption->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "FastEthernet";
}

Native::Interface::Fastethernet::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::Fastethernet::Ospfv3::has_data() const
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

bool Native::Interface::Fastethernet::Ospfv3::has_operation() const
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

std::string Native::Interface::Fastethernet::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Fastethernet::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Fastethernet::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Fastethernet::Ospfv3::MultiArea>();
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Fastethernet::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Fastethernet::Ospfv3::PrefixSuppression>();
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::get_children() const
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

void Native::Interface::Fastethernet::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "manet" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "process-id" || name == "dead-interval" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost>())
	,database_filter(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,ipv4(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4>())
	,ipv6(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6>())
	,manet(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea>())
	,network(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "process-id"; yang_parent_name = "ospfv3";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::~ProcessId()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea>();
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::get_children() const
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

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
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

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "ipv4" || name == "ipv6" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "id" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{
    yang_name = "authentication"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::~Authentication()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::~Bfd()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::~Cost()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::get_children() const
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{
    yang_name = "database-filter"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "disable" || name == "id")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost>())
	,database_filter(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea>())
	,network(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea>();
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
        auto c = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

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

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
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

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{
    yang_name = "area"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{
    yang_name = "authentication"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{
    yang_name = "database-filter"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::~MultiArea()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "disable" || name == "id")
        return true;
    return false;
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::L2Protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Fastethernet::Service::Instance::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::Fastethernet::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::Fastethernet::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::Fastethernet::Xconnect::Sequence::both {0, "both"};
const Enum::YLeaf Native::Interface::Fastethernet::Xconnect::Sequence::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Fastethernet::Xconnect::Sequence::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::Fastethernet::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Fastethernet::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Fastethernet::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::Fastethernet::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Fastethernet::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::Fastethernet::Cts::RoleBased::SgtCache::egress {0, "egress"};
const Enum::YLeaf Native::Interface::Fastethernet::Cts::RoleBased::SgtCache::ingress {1, "ingress"};

const Enum::YLeaf Native::Interface::Fastethernet::Dot1X::Pae::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::Fastethernet::Dot1X::Pae::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::Fastethernet::Dot1X::Pae::both {2, "both"};

const Enum::YLeaf Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Fastethernet::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::Fastethernet::Ospfv3::ProcessId::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Fastethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Fastethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All::out {0, "out"};


}
}
