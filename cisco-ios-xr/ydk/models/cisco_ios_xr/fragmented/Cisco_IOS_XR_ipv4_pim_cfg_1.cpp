
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

Pim::DefaultContext::Ipv4::Paths::Path::Path()
    :
    prefix_length{YType::uint8, "prefix-length"},
    source_address{YType::str, "source-address"},
    rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

Pim::DefaultContext::Ipv4::Paths::Path::~Path()
{
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return prefix_length.is_set
	|| source_address.is_set;
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(source_address.operation)
	|| is_set(rpf_proxy_address.operation);
}

std::string Pim::DefaultContext::Ipv4::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[prefix-length='" <<prefix_length <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Paths::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::DefaultContext::Ipv4::Paths::Path::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

Pim::DefaultContext::Ipv4::AllowRp::AllowRp()
    :
    group_list_name{YType::str, "group-list-name"},
    rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AllowRp::~AllowRp()
{
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_list_name.operation)
	|| is_set(rp_list_name.operation);
}

std::string Pim::DefaultContext::Ipv4::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.operation)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.operation)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::DefaultContext::Ipv4::AllowRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::AllowRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
    }
}

Pim::DefaultContext::Ipv4::Convergence::Convergence()
    :
    link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
    rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Convergence::~Convergence()
{
}

bool Pim::DefaultContext::Ipv4::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::DefaultContext::Ipv4::Convergence::has_operation() const
{
    return is_set(operation)
	|| is_set(link_down_prune_delay.operation)
	|| is_set(rpf_conflict_join_delay.operation);
}

std::string Pim::DefaultContext::Ipv4::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.operation)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.operation)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::DefaultContext::Ipv4::Convergence::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Convergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
    }
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrrs()
{
    yang_name = "cj-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::~CjMulticastOnlyFrrs()
{
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frrs";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cj-multicast-only-frr")
    {
        for(auto const & c : cj_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr>();
        c->parent = this;
        cj_multicast_only_frr.push_back(std::move(c));
        children[segment_path] = cj_multicast_only_frr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_children()
{
    for (auto const & c : cj_multicast_only_frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::CjMulticastOnlyFrr()
    :
    backup{YType::str, "backup"},
    prefix_length{YType::uint8, "prefix-length"},
    primary{YType::str, "primary"},
    source{YType::str, "source"}
{
    yang_name = "cj-multicast-only-frr"; yang_parent_name = "cj-multicast-only-frrs";
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::~CjMulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_data() const
{
    return backup.is_set
	|| prefix_length.is_set
	|| primary.is_set
	|| source.is_set;
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary.operation)
	|| is_set(source.operation);
}

std::string Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frr" <<"[backup='" <<backup <<"']" <<"[prefix-length='" <<prefix_length <<"']" <<"[primary='" <<primary <<"']" <<"[source='" <<source <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/cj-multicast-only-frrs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}


}
}

