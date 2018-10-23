
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_58.hpp"
#include "Cisco_IOS_XE_native_59.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::TenGigabitEthernet::Service::Service()
    :
    instance(this, {"id"})
{

    yang_name = "service"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::~Service()
{
}

bool Native::Interface::TenGigabitEthernet::Service::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    trunk{YType::empty, "trunk"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    description{YType::str, "description"},
    evc_name{YType::str, "evc-name"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"}
        ,
    encapsulation(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation>())
    , ip(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip>())
    , ipv6(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6>())
    , rewrite(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite>())
    , errdisable(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable>())
    , ethernet_container(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer>())
    , snmp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp>())
    , bridge_domain(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain>())
    , mac(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac>())
    , service_policy(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy>())
    , cfm(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm>())
    , l2protocol(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol>())
    , xconnect(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass>())
{
    encapsulation->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    rewrite->parent = this;
    errdisable->parent = this;
    ethernet_container->parent = this;
    snmp->parent = this;
    bridge_domain->parent = this;
    mac->parent = this;
    service_policy->parent = this;
    cfm->parent = this;
    l2protocol->parent = this;
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::~Instance()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| trunk.is_set
	|| gigabitethernet.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| description.is_set
	|| evc_name.is_set
	|| group.is_set
	|| shutdown.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ethernet_evc_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(evc_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.yfilter)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.yfilter)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(rewrite != nullptr)
    {
        _children["rewrite"] = rewrite;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        _children["ethernet-container"] = ethernet_container;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(bridge_domain != nullptr)
    {
        _children["bridge-domain"] = bridge_domain;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    if(l2protocol != nullptr)
    {
        _children["l2protocol"] = l2protocol;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
        evc_name.value_namespace = name_space;
        evc_name.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::TenGigabitEthernet::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "evc-name")
    {
        evc_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "xconnect" || name == "xconnect-pw-class" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
        ,
    dot1ad(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q>())
    , priority_tagged(nullptr) // presence node
    , untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        _children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        _children["untagged"] = untagged;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
        ,
    cos2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
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
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
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
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
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
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
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
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::~Cos2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Dot1q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
        ,
    cos2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
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
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::~Cos2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
        ,
    cos_container(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
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

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_container != nullptr)
    {
        _children["cos-container"] = cos_container;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl>())
    , dhcp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp>())
    , verify(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_data() const
{
    if (is_presence_container) return true;
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping.yfilter = yfilter;
    }
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
        traffic_filter.value_namespace = name_space;
        traffic_filter.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter.yfilter = yfilter;
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>())
    , push(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>())
    , translate(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pop != nullptr)
    {
        _children["pop"] = pop;
    }

    if(push != nullptr)
    {
        _children["push"] = push;
    }

    if(translate != nullptr)
    {
        _children["translate"] = translate;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    if (is_presence_container) return true;
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
    , t1_to_2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
    , t2_to_1(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
    , t2_to_2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    if (is_presence_container) return true;
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(t1_to_1 != nullptr)
    {
        _children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        _children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        _children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        _children["t2-to-2"] = t2_to_2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    if (is_presence_container) return true;
    return mac_security.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>())
    , loopback(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lmi != nullptr)
    {
        _children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        _children["loopback"] = loopback;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    if (is_presence_container) return true;
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ce_vlan != nullptr)
    {
        _children["ce-vlan"] = ce_vlan;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"},
    vlan_range{YType::str, "vlan-range"}
{

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| vlan_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| ydk::is_set(vlan_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());
    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "default" || name == "untagged" || name == "vlan-range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap>())
    , ifindex(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
        ,
    split_horizon(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
    , access_group(this, {"acl_name"})
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security>();
        }
        return security;
    }

    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "access-group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
        ,
    maximum(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return addresses.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::ServicePolicy()
    :
    input(this, {"name"})
    , output(this, {"name"})
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input>();
        ent_->parent = this;
        input.append(ent_);
        return ent_;
    }

    if(child_yang_name == "output")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output>();
        ent_->parent = this;
        output.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : input.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : output.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation>())
    , mep(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep>())
    , mip(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        _children["mip"] = mip;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::Dot1ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::Dot1q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::L2protocol()
    :
    discard(nullptr) // presence node
    , peer(nullptr) // presence node
    , forward(nullptr) // presence node
    , tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::~L2protocol()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(forward != nullptr)
    {
        _children["forward"] = forward;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Discard()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "discard"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::~Discard()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::~Peer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::~Forward()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
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
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lacp::Lacp()
    :
    port_priority{YType::uint32, "port-priority"},
    rate{YType::enumeration, "rate"}
{

    yang_name = "lacp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lacp::~Lacp()
{
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| rate.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-priority" || name == "rate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::CiscoIOSXEEthernetMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::~CiscoIOSXEEthernetMacsecOption()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Macsec()
    :
    dot1q_in_clear{YType::enumeration, "dot1q-in-clear"}
        ,
    replay_protection(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return dot1q_in_clear.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q_in_clear.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q_in_clear.is_set || is_set(dot1q_in_clear.yfilter)) leaf_name_data.push_back(dot1q_in_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear = value;
        dot1q_in_clear.value_namespace = name_space;
        dot1q_in_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "dot1q-in-clear")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
        ,
    type(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control>())
    , performance_monitor(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor>())
    , service_chain(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::has_data() const
{
    if (is_presence_container) return true;
    return subscriber.is_set;
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Auto()
    :
    qos(std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Auto::~Auto()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::has_data() const
{
    if (is_presence_container) return true;
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::TenGigabitEthernet::Auto::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Qos()
    :
    classify(nullptr) // presence node
    , trust(nullptr) // presence node
    , video(std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos::Video>())
    , voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Auto::Qos::~Qos()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Auto::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::TenGigabitEthernet::Auto::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classify != nullptr)
    {
        _children["classify"] = classify;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(video != nullptr)
    {
        _children["video"] = video;
    }

    if(voip != nullptr)
    {
        _children["voip"] = voip;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classify" || name == "trust" || name == "video" || name == "voip")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{

    yang_name = "classify"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::~Classify()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::has_data() const
{
    if (is_presence_container) return true;
    return police.is_set;
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "police")
    {
        police = value;
        police.value_namespace = name_space;
        police.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "police")
    {
        police.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Classify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "trust"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::~Trust()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dscp")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{

    yang_name = "video"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Video::~Video()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Video::has_data() const
{
    if (is_presence_container) return true;
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Video::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts.yfilter)
	|| ydk::is_set(ip_camera.yfilter)
	|| ydk::is_set(media_player.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Auto::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::Qos::Video::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.yfilter)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.yfilter)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.yfilter)) leaf_name_data.push_back(media_player.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Video::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cts")
    {
        cts = value;
        cts.value_namespace = name_space;
        cts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
        ip_camera.value_namespace = name_space;
        ip_camera.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-player")
    {
        media_player = value;
        media_player.value_namespace = name_space;
        media_player.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Video::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cts")
    {
        cts.yfilter = yfilter;
    }
    if(value_path == "ip-camera")
    {
        ip_camera.yfilter = yfilter;
    }
    if(value_path == "media-player")
    {
        media_player.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Video::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "ip-camera" || name == "media-player")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{

    yang_name = "voip"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::~Voip()
{
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::has_data() const
{
    if (is_presence_container) return true;
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_phone.yfilter)
	|| ydk::is_set(cisco_softphone.yfilter)
	|| ydk::is_set(trust.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.yfilter)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.yfilter)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
        cisco_phone.value_namespace = name_space;
        cisco_phone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
        cisco_softphone.value_namespace = name_space;
        cisco_softphone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone.yfilter = yfilter;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone.yfilter = yfilter;
    }
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Auto::Qos::Voip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone" || name == "cisco-softphone" || name == "trust")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::TenGigabitEthernet::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Datalink::~Datalink()
{
}

bool Native::Interface::TenGigabitEthernet::Datalink::has_data() const
{
    if (is_presence_container) return true;
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::TenGigabitEthernet::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::TenGigabitEthernet::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{

    yang_name = "flow"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Datalink::Flow::~Flow()
{
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Datalink::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Datalink::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Datalink::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::Monitor()
    :
    user_defined_flow{YType::str, "User-defined-flow"},
    input_output{YType::enumeration, "input-output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return user_defined_flow.is_set
	|| input_output.is_set;
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_defined_flow.yfilter)
	|| ydk::is_set(input_output.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined_flow.is_set || is_set(user_defined_flow.yfilter)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());
    if (input_output.is_set || is_set(input_output.yfilter)) leaf_name_data.push_back(input_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
        user_defined_flow.value_namespace = name_space;
        user_defined_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-output")
    {
        input_output = value;
        input_output.value_namespace = name_space;
        input_output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "User-defined-flow")
    {
        user_defined_flow.yfilter = yfilter;
    }
    if(value_path == "input-output")
    {
        input_output.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "User-defined-flow" || name == "input-output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
        ,
    level(this, {"range"})
{

    yang_name = "energywise"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Energywise::~Energywise()
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return activitycheck.is_set;
}

bool Native::Interface::TenGigabitEthernet::Energywise::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(activitycheck.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.yfilter)) leaf_name_data.push_back(activitycheck.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
        activitycheck.value_namespace = name_space;
        activitycheck.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activitycheck")
    {
        activitycheck.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "activitycheck")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Level()
    :
    range{YType::uint8, "range"}
        ,
    recurrence(std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence>())
{
    recurrence->parent = this;

    yang_name = "level"; yang_parent_name = "energywise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Energywise::Level::~Level()
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (recurrence !=  nullptr && recurrence->has_data());
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (recurrence !=  nullptr && recurrence->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Energywise::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Energywise::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Energywise::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recurrence")
    {
        if(recurrence == nullptr)
        {
            recurrence = std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence>();
        }
        return recurrence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Energywise::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recurrence != nullptr)
    {
        _children["recurrence"] = recurrence;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recurrence" || name == "range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Recurrence()
    :
    importance(this, {"range"})
{

    yang_name = "recurrence"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::~Recurrence()
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<importance.len(); index++)
    {
        if(importance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::has_operation() const
{
    for (std::size_t index=0; index<importance.len(); index++)
    {
        if(importance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recurrence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "importance")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance>();
        ent_->parent = this;
        importance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : importance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "importance")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::Importance()
    :
    range{YType::uint16, "range"}
        ,
    at(std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At>())
{
    at->parent = this;

    yang_name = "importance"; yang_parent_name = "recurrence"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::~Importance()
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (at !=  nullptr && at->has_data());
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (at !=  nullptr && at->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "importance";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "at")
    {
        if(at == nullptr)
        {
            at = std::make_shared<Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At>();
        }
        return at;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(at != nullptr)
    {
        _children["at"] = at;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at" || name == "range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::At()
    :
    minute{YType::str, "minute"},
    hour{YType::str, "hour"},
    day{YType::str, "day"},
    month{YType::str, "month"},
    weekday{YType::str, "weekday"}
{

    yang_name = "at"; yang_parent_name = "importance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::~At()
{
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_data() const
{
    if (is_presence_container) return true;
    return minute.is_set
	|| hour.is_set
	|| day.is_set
	|| month.is_set
	|| weekday.is_set;
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minute.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(weekday.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (weekday.is_set || is_set(weekday.yfilter)) leaf_name_data.push_back(weekday.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekday")
    {
        weekday = value;
        weekday.value_namespace = name_space;
        weekday.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "weekday")
    {
        weekday.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute" || name == "hour" || name == "day" || name == "month" || name == "weekday")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::TenGigabitEthernet::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Location::~Location()
{
}

bool Native::Interface::TenGigabitEthernet::Location::has_data() const
{
    if (is_presence_container) return true;
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::TenGigabitEthernet::Location::has_operation() const
{
    return is_set(yfilter)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::TenGigabitEthernet::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(civic_location_id != nullptr)
    {
        _children["civic-location-id"] = civic_location_id;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic-location-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
        ,
    host(nullptr) // presence node
    , none(nullptr) // presence node
{

    yang_name = "civic-location-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::has_data() const
{
    if (is_presence_container) return true;
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_identifier.yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Location::CivicLocationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.yfilter)) leaf_name_data.push_back(location_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(none != nullptr)
    {
        _children["none"] = none;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
        location_identifier.value_namespace = name_space;
        location_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-identifier")
    {
        location_identifier.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "none" || name == "location-identifier")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "host"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::has_data() const
{
    if (is_presence_container) return true;
    return port_location.is_set;
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "none"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::has_data() const
{
    if (is_presence_container) return true;
    return port_location.is_set;
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Location::CivicLocationId::None::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mac::Mac()
    :
    access_group(this, {"direction"})
{

    yang_name = "mac"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mac::~Mac()
{
}

bool Native::Interface::TenGigabitEthernet::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mac::AccessGroup::AccessGroup()
    :
    direction{YType::enumeration, "direction"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::TenGigabitEthernet::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| acl_name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "acl-name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Macro::Macro()
    :
    description{YType::str, "description"}
        ,
    auto_(std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Macro::~Macro()
{
}

bool Native::Interface::TenGigabitEthernet::Macro::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::TenGigabitEthernet::Macro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "description")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Auto()
    :
    processing{YType::boolean, "processing"}
        ,
    port(std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Port>())
    , control(std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Control>())
{
    port->parent = this;
    control->parent = this;

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Macro::Auto::~Auto()
{
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::has_data() const
{
    if (is_presence_container) return true;
    return processing.is_set
	|| (port !=  nullptr && port->has_data())
	|| (control !=  nullptr && control->has_data());
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Macro::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Macro::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Macro::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Port>();
        }
        return port;
    }

    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Macro::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(control != nullptr)
    {
        _children["control"] = control;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "control" || name == "processing")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Port::Port()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "port"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Port::~Port()
{
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Port::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set;
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Macro::Auto::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Macro::Auto::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Macro::Auto::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Macro::Auto::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Control()
    :
    device(std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device>())
{
    device->parent = this;

    yang_name = "control"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Control::~Control()
{
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::has_data() const
{
    if (is_presence_container) return true;
    return (device !=  nullptr && device->has_data());
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::has_operation() const
{
    return is_set(yfilter)
	|| (device !=  nullptr && device->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Macro::Auto::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Macro::Auto::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Macro::Auto::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device>();
        }
        return device;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Macro::Auto::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device != nullptr)
    {
        _children["device"] = device;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::Device()
    :
    phone{YType::empty, "phone"}
{

    yang_name = "device"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::~Device()
{
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::has_data() const
{
    if (is_presence_container) return true;
    return phone.is_set;
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(phone.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phone.is_set || is_set(phone.yfilter)) leaf_name_data.push_back(phone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phone")
    {
        phone = value;
        phone.value_namespace = name_space;
        phone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phone")
    {
        phone.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Macro::Auto::Control::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phone")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{

    yang_name = "dual-active"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::DualActive::~DualActive()
{
}

bool Native::Interface::TenGigabitEthernet::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return fast_hello.is_set;
}

bool Native::Interface::TenGigabitEthernet::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_hello.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.yfilter)) leaf_name_data.push_back(fast_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
        fast_hello.value_namespace = name_space;
        fast_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-hello")
    {
        fast_hello.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-hello")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "load-balancing"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::TenGigabitEthernet::LoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::TenGigabitEthernet::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
        ,
    service_policy(std::make_shared<Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::VlanRange::~VlanRange()
{
}

bool Native::Interface::TenGigabitEthernet::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::TenGigabitEthernet::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "vlan-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::TenGigabitEthernet::Switch::Virtual>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Switch::~Switch()
{
}

bool Native::Interface::TenGigabitEthernet::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::TenGigabitEthernet::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::TenGigabitEthernet::Switch::Virtual>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_ != nullptr)
    {
        _children["virtual"] = virtual_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Switch::Virtual::Virtual()
    :
    link{YType::uint8, "link"}
{

    yang_name = "virtual"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Switch::Virtual::~Virtual()
{
}

bool Native::Interface::TenGigabitEthernet::Switch::Virtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set;
}

bool Native::Interface::TenGigabitEthernet::Switch::Virtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Switch::Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Switch::Virtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Switch::Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Switch::Virtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Switch::Virtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Switch::Virtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Switch::Virtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::has_data() const
{
    if (is_presence_container) return true;
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SrrQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::SrrQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::SrrQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape>())
    , share(std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;
    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(share != nullptr)
    {
        _children["share"] = share;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "share")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{

    yang_name = "shape"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{

    yang_name = "share"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::CiscoIOSXESwitchMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::~CiscoIOSXESwitchMacsecOption()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
        ,
    replay_protection(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return network_link.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_link.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.yfilter)) leaf_name_data.push_back(network_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-link")
    {
        network_link = value;
        network_link.value_namespace = name_space;
        network_link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-link")
    {
        network_link.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "network-link")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "device-tracking"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::TenGigabitEthernet::DeviceTracking::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::TenGigabitEthernet::DeviceTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Ifindex>())
    , trap(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::~Snmp()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"},
    clear{YType::boolean, "clear"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set
	|| clear.is_set;
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(clear.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist" || name == "clear")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
        ,
    link_status_capas(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::~Trap()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status_capas != nullptr)
    {
        _children["link-status-capas"] = link_status_capas;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_data() const
{
    if (is_presence_container) return true;
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status != nullptr)
    {
        _children["link-status"] = link_status;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    if (is_presence_container) return true;
    return duplicates.is_set;
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::~Crypto()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::TenGigabitEthernet::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::Map::~Map()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Interface::TenGigabitEthernet::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::TenGigabitEthernet::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::TenGigabitEthernet::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::Mka()
    :
    policy(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::Policy>())
    , pre_shared_key(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey>())
{
    policy->parent = this;
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::~Mka()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
{

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::Policy::~Policy()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::TenGigabitEthernet::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::TenGigabitEthernet::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Utd::~Utd()
{
}

bool Native::Interface::TenGigabitEthernet::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::TenGigabitEthernet::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    sequence{YType::enumeration, "sequence"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "xconnect"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| sequence.is_set
	|| pw_class.is_set;
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "sequence" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::Evpn()
    :
    ethernet_segment(this, {"es_value"})
{

    yang_name = "evpn"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::~Evpn()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::EthernetSegment()
    :
    es_value{YType::uint16, "es-value"},
    sytem_mac{YType::str, "sytem-mac"}
        ,
    df_election(std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection>())
    , redundancy(std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy>())
{
    df_election->parent = this;
    redundancy->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::~EthernetSegment()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return es_value.is_set
	|| sytem_mac.is_set
	|| (df_election !=  nullptr && df_election->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(es_value.yfilter)
	|| ydk::is_set(sytem_mac.yfilter)
	|| (df_election !=  nullptr && df_election->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    ADD_KEY_TOKEN(es_value, "es-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (es_value.is_set || is_set(es_value.yfilter)) leaf_name_data.push_back(es_value.get_name_leafdata());
    if (sytem_mac.is_set || is_set(sytem_mac.yfilter)) leaf_name_data.push_back(sytem_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-election")
    {
        if(df_election == nullptr)
        {
            df_election = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection>();
        }
        return df_election;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(df_election != nullptr)
    {
        _children["df-election"] = df_election;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "es-value")
    {
        es_value = value;
        es_value.value_namespace = name_space;
        es_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac = value;
        sytem_mac.value_namespace = name_space;
        sytem_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "es-value")
    {
        es_value.yfilter = yfilter;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-election" || name == "redundancy" || name == "es-value" || name == "sytem-mac")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::DfElection()
    :
    wait_time{YType::uint8, "wait-time"}
{

    yang_name = "df-election"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::~DfElection()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-election";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::DfElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::Redundancy()
    :
    all_active{YType::empty, "all-active"},
    single_active{YType::empty, "single-active"}
{

    yang_name = "redundancy"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::~Redundancy()
{
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return all_active.is_set
	|| single_active.is_set;
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_active.yfilter)
	|| ydk::is_set(single_active.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_active.is_set || is_set(all_active.yfilter)) leaf_name_data.push_back(all_active.get_name_leafdata());
    if (single_active.is_set || is_set(single_active.yfilter)) leaf_name_data.push_back(single_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-active")
    {
        all_active = value;
        all_active.value_namespace = name_space;
        all_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-active")
    {
        single_active = value;
        single_active.value_namespace = name_space;
        single_active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-active")
    {
        all_active.yfilter = yfilter;
    }
    if(value_path == "single-active")
    {
        single_active.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Evpn::EthernetSegment::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-active" || name == "single-active")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::FabricDomain()
    :
    iwan_fabric(std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric>())
{
    iwan_fabric->parent = this;

    yang_name = "fabric-domain"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::~FabricDomain()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_data() const
{
    if (is_presence_container) return true;
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iwan_fabric != nullptr)
    {
        _children["iwan-fabric"] = iwan_fabric;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::FabricDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::IwanFabric()
    :
    word(this, {"word"})
{

    yang_name = "iwan-fabric"; yang_parent_name = "fabric-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::~IwanFabric()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::Word()
    :
    word{YType::str, "word"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "word"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::~Word()
{
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| interface_id.is_set;
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::FabricDomain::IwanFabric::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Mvrp()
    :
    mvrp{YType::empty, "mvrp"}
        ,
    registration(std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Registration>())
    , timer(std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer>())
{
    registration->parent = this;
    timer->parent = this;

    yang_name = "mvrp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::~Mvrp()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return mvrp.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mvrp.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mvrp.is_set || is_set(mvrp.yfilter)) leaf_name_data.push_back(mvrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mvrp")
    {
        mvrp = value;
        mvrp.value_namespace = name_space;
        mvrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mvrp")
    {
        mvrp.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "timer" || name == "mvrp")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Registration::Registration()
    :
    fixed{YType::empty, "fixed"},
    forbidden{YType::empty, "forbidden"},
    normal{YType::empty, "normal"}
{

    yang_name = "registration"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mvrp::Registration::~Registration()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return fixed.is_set
	|| forbidden.is_set
	|| normal.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed.yfilter)
	|| ydk::is_set(forbidden.yfilter)
	|| ydk::is_set(normal.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed.is_set || is_set(fixed.yfilter)) leaf_name_data.push_back(fixed.get_name_leafdata());
    if (forbidden.is_set || is_set(forbidden.yfilter)) leaf_name_data.push_back(forbidden.get_name_leafdata());
    if (normal.is_set || is_set(normal.yfilter)) leaf_name_data.push_back(normal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed")
    {
        fixed = value;
        fixed.value_namespace = name_space;
        fixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forbidden")
    {
        forbidden = value;
        forbidden.value_namespace = name_space;
        forbidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal")
    {
        normal = value;
        normal.value_namespace = name_space;
        normal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed")
    {
        fixed.yfilter = yfilter;
    }
    if(value_path == "forbidden")
    {
        forbidden.yfilter = yfilter;
    }
    if(value_path == "normal")
    {
        normal.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "forbidden" || name == "normal")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Timer()
    :
    periodic{YType::empty, "periodic"}
        ,
    join(nullptr) // presence node
    , leave(nullptr) // presence node
    , leave_all(nullptr) // presence node
{

    yang_name = "timer"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::~Timer()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set
	|| (join !=  nullptr && join->has_data())
	|| (leave !=  nullptr && leave->has_data())
	|| (leave_all !=  nullptr && leave_all->has_data());
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| (join !=  nullptr && join->has_operation())
	|| (leave !=  nullptr && leave->has_operation())
	|| (leave_all !=  nullptr && leave_all->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join")
    {
        if(join == nullptr)
        {
            join = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join>();
        }
        return join;
    }

    if(child_yang_name == "leave")
    {
        if(leave == nullptr)
        {
            leave = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave>();
        }
        return leave;
    }

    if(child_yang_name == "leave-all")
    {
        if(leave_all == nullptr)
        {
            leave_all = std::make_shared<Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll>();
        }
        return leave_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join != nullptr)
    {
        _children["join"] = join;
    }

    if(leave != nullptr)
    {
        _children["leave"] = leave;
    }

    if(leave_all != nullptr)
    {
        _children["leave-all"] = leave_all;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join" || name == "leave" || name == "leave-all" || name == "periodic")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::Join()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "join"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::~Join()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Join::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::Leave()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::~Leave()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::Leave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::LeaveAll()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave-all"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::~LeaveAll()
{
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mvrp::Timer::LeaveAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lisp::~Lisp()
{
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::TenGigabitEthernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::SecondDot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Lacp::Rate::fast {0, "fast"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Lacp::Rate::normal {1, "normal"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Dot1qInClear::Y_1 {0, "1"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::InputOutput::input {0, "input"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Datalink::Flow::Monitor::InputOutput::output {1, "output"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Mac::AccessGroup::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Mac::AccessGroup::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::both {0, "both"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::receive {1, "receive"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Xconnect::Sequence::transmit {2, "transmit"};


}
}

