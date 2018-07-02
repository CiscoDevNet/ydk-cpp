
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::CloneSource()
    :
    source{YType::str, "source"},
    primary{YType::str, "primary"},
    backup{YType::str, "backup"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "clone-source"; yang_parent_name = "clone-sources"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::~CloneSource()
{
}

bool Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| primary.is_set
	|| backup.is_set
	|| prefix_length.is_set;
}

bool Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/mofrr/clone-sources/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clone-source";
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(primary, "primary");
    ADD_KEY_TOKEN(backup, "backup");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "primary" || name == "backup" || name == "prefix-length")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Paths::Paths()
    :
    path(this, {"source_address", "prefix_length"})
{

    yang_name = "paths"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::DefaultContext::Ipv4::Paths::~Paths()
{
}

bool Pim::DefaultContext::Ipv4::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::DefaultContext::Ipv4::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::DefaultContext::Ipv4::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::Paths::Path>();
        c->parent = this;
        path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Paths::Path::Path()
    :
    source_address{YType::str, "source-address"},
    prefix_length{YType::uint8, "prefix-length"},
    rpf_proxy_address{YType::str, "rpf-proxy-address"}
{

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::DefaultContext::Ipv4::Paths::Path::~Path()
{
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| prefix_length.is_set;
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(rpf_proxy_address.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Paths::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::DefaultContext::Ipv4::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::DefaultContext::Ipv4::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::DefaultContext::Ipv4::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

void Pim::DefaultContext::Ipv4::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "prefix-length" || name == "rpf-proxy-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AllowRp::AllowRp()
    :
    rp_list_name{YType::str, "rp-list-name"},
    group_list_name{YType::str, "group-list-name"}
{

    yang_name = "allow-rp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Pim::DefaultContext::Ipv4::AllowRp::~AllowRp()
{
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_data() const
{
    if (is_presence_container) return true;
    return rp_list_name.is_set
	|| group_list_name.is_set;
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_list_name.yfilter)
	|| ydk::is_set(group_list_name.yfilter);
}

std::string Pim::DefaultContext::Ipv4::AllowRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::DefaultContext::Ipv4::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::DefaultContext::Ipv4::AllowRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_list_name.is_set || is_set(rp_list_name.yfilter)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());
    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AllowRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::DefaultContext::Ipv4::AllowRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
        rp_list_name.value_namespace = name_space;
        rp_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::AllowRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-list-name")
    {
        rp_list_name.yfilter = yfilter;
    }
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-list-name" || name == "group-list-name")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Convergence::Convergence()
    :
    rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"},
    link_down_prune_delay{YType::uint32, "link-down-prune-delay"}
{

    yang_name = "convergence"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::DefaultContext::Ipv4::Convergence::~Convergence()
{
}

bool Pim::DefaultContext::Ipv4::Convergence::has_data() const
{
    if (is_presence_container) return true;
    return rpf_conflict_join_delay.is_set
	|| link_down_prune_delay.is_set;
}

bool Pim::DefaultContext::Ipv4::Convergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpf_conflict_join_delay.yfilter)
	|| ydk::is_set(link_down_prune_delay.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Convergence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::DefaultContext::Ipv4::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::DefaultContext::Ipv4::Convergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.yfilter)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());
    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.yfilter)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Convergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::DefaultContext::Ipv4::Convergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
        rpf_conflict_join_delay.value_namespace = name_space;
        rpf_conflict_join_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
        link_down_prune_delay.value_namespace = name_space;
        link_down_prune_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Convergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay.yfilter = yfilter;
    }
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Convergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-conflict-join-delay" || name == "link-down-prune-delay")
        return true;
    return false;
}


}
}

