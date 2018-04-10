
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_fib_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_fib_oper {

FibOperData::FibOperData()
{

    yang_name = "fib-oper-data"; yang_parent_name = "Cisco-IOS-XE-fib-oper"; is_top_level_class = true; has_list_ancestor = false;
}

FibOperData::~FibOperData()
{
}

bool FibOperData::has_data() const
{
    for (std::size_t index=0; index<fib_ni_entry.size(); index++)
    {
        if(fib_ni_entry[index]->has_data())
            return true;
    }
    return false;
}

bool FibOperData::has_operation() const
{
    for (std::size_t index=0; index<fib_ni_entry.size(); index++)
    {
        if(fib_ni_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FibOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-fib-oper:fib-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FibOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-ni-entry")
    {
        auto c = std::make_shared<FibOperData::FibNiEntry>();
        c->parent = this;
        fib_ni_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fib_ni_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FibOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FibOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FibOperData::clone_ptr() const
{
    return std::make_shared<FibOperData>();
}

std::string FibOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FibOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FibOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FibOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FibOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-ni-entry")
        return true;
    return false;
}

FibOperData::FibNiEntry::FibNiEntry()
    :
    instance_name{YType::str, "instance-name"},
    af{YType::enumeration, "af"},
    num_pfx{YType::uint32, "num-pfx"},
    num_pfx_fwd{YType::uint32, "num-pfx-fwd"},
    num_pfx_non_fwd{YType::uint32, "num-pfx-non-fwd"}
{

    yang_name = "fib-ni-entry"; yang_parent_name = "fib-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

FibOperData::FibNiEntry::~FibNiEntry()
{
}

bool FibOperData::FibNiEntry::has_data() const
{
    for (std::size_t index=0; index<fib_entries.size(); index++)
    {
        if(fib_entries[index]->has_data())
            return true;
    }
    return instance_name.is_set
	|| af.is_set
	|| num_pfx.is_set
	|| num_pfx_fwd.is_set
	|| num_pfx_non_fwd.is_set;
}

bool FibOperData::FibNiEntry::has_operation() const
{
    for (std::size_t index=0; index<fib_entries.size(); index++)
    {
        if(fib_entries[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(num_pfx.yfilter)
	|| ydk::is_set(num_pfx_fwd.yfilter)
	|| ydk::is_set(num_pfx_non_fwd.yfilter);
}

std::string FibOperData::FibNiEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-fib-oper:fib-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string FibOperData::FibNiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-ni-entry" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibOperData::FibNiEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.yfilter)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (num_pfx_fwd.is_set || is_set(num_pfx_fwd.yfilter)) leaf_name_data.push_back(num_pfx_fwd.get_name_leafdata());
    if (num_pfx_non_fwd.is_set || is_set(num_pfx_non_fwd.yfilter)) leaf_name_data.push_back(num_pfx_non_fwd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibOperData::FibNiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-entries")
    {
        auto c = std::make_shared<FibOperData::FibNiEntry::FibEntries>();
        c->parent = this;
        fib_entries.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibOperData::FibNiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fib_entries)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FibOperData::FibNiEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
        num_pfx.value_namespace = name_space;
        num_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx-fwd")
    {
        num_pfx_fwd = value;
        num_pfx_fwd.value_namespace = name_space;
        num_pfx_fwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-pfx-non-fwd")
    {
        num_pfx_non_fwd = value;
        num_pfx_non_fwd.value_namespace = name_space;
        num_pfx_non_fwd.value_namespace_prefix = name_space_prefix;
    }
}

void FibOperData::FibNiEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "num-pfx")
    {
        num_pfx.yfilter = yfilter;
    }
    if(value_path == "num-pfx-fwd")
    {
        num_pfx_fwd.yfilter = yfilter;
    }
    if(value_path == "num-pfx-non-fwd")
    {
        num_pfx_non_fwd.yfilter = yfilter;
    }
}

bool FibOperData::FibNiEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-entries" || name == "instance-name" || name == "af" || name == "num-pfx" || name == "num-pfx-fwd" || name == "num-pfx-non-fwd")
        return true;
    return false;
}

FibOperData::FibNiEntry::FibEntries::FibEntries()
    :
    ip_addr{YType::str, "ip-addr"},
    instance_name{YType::str, "instance-name"},
    af{YType::enumeration, "af"},
    num_paths{YType::uint8, "num-paths"},
    packets_forwarded{YType::uint64, "packets-forwarded"},
    octets_forwarded{YType::uint64, "octets-forwarded"}
{

    yang_name = "fib-entries"; yang_parent_name = "fib-ni-entry"; is_top_level_class = false; has_list_ancestor = true;
}

FibOperData::FibNiEntry::FibEntries::~FibEntries()
{
}

bool FibOperData::FibNiEntry::FibEntries::has_data() const
{
    for (std::size_t index=0; index<fib_nexthop_entries.size(); index++)
    {
        if(fib_nexthop_entries[index]->has_data())
            return true;
    }
    return ip_addr.is_set
	|| instance_name.is_set
	|| af.is_set
	|| num_paths.is_set
	|| packets_forwarded.is_set
	|| octets_forwarded.is_set;
}

bool FibOperData::FibNiEntry::FibEntries::has_operation() const
{
    for (std::size_t index=0; index<fib_nexthop_entries.size(); index++)
    {
        if(fib_nexthop_entries[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(packets_forwarded.yfilter)
	|| ydk::is_set(octets_forwarded.yfilter);
}

std::string FibOperData::FibNiEntry::FibEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-entries" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibOperData::FibNiEntry::FibEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.yfilter)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (octets_forwarded.is_set || is_set(octets_forwarded.yfilter)) leaf_name_data.push_back(octets_forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibOperData::FibNiEntry::FibEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-nexthop-entries")
    {
        auto c = std::make_shared<FibOperData::FibNiEntry::FibEntries::FibNexthopEntries>();
        c->parent = this;
        fib_nexthop_entries.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibOperData::FibNiEntry::FibEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fib_nexthop_entries)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FibOperData::FibNiEntry::FibEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
        packets_forwarded.value_namespace = name_space;
        packets_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded = value;
        octets_forwarded.value_namespace = name_space;
        octets_forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void FibOperData::FibNiEntry::FibEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded.yfilter = yfilter;
    }
    if(value_path == "octets-forwarded")
    {
        octets_forwarded.yfilter = yfilter;
    }
}

bool FibOperData::FibNiEntry::FibEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-nexthop-entries" || name == "ip-addr" || name == "instance-name" || name == "af" || name == "num-paths" || name == "packets-forwarded" || name == "octets-forwarded")
        return true;
    return false;
}

FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::FibNexthopEntries()
    :
    nh_addr{YType::str, "nh-addr"},
    index_{YType::uint32, "index"},
    af{YType::enumeration, "af"},
    ifname{YType::str, "ifname"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    weight{YType::uint8, "weight"},
    encap{YType::enumeration, "encap"},
    decap{YType::enumeration, "decap"}
{

    yang_name = "fib-nexthop-entries"; yang_parent_name = "fib-entries"; is_top_level_class = false; has_list_ancestor = true;
}

FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::~FibNexthopEntries()
{
}

bool FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::has_data() const
{
    return nh_addr.is_set
	|| index_.is_set
	|| af.is_set
	|| ifname.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| weight.is_set
	|| encap.is_set
	|| decap.is_set;
}

bool FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(decap.yfilter);
}

std::string FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-nexthop-entries" <<"[nh-addr='" <<nh_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (decap.is_set || is_set(decap.yfilter)) leaf_name_data.push_back(decap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap")
    {
        decap = value;
        decap.value_namespace = name_space;
        decap.value_namespace_prefix = name_space_prefix;
    }
}

void FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "decap")
    {
        decap.yfilter = yfilter;
    }
}

bool FibOperData::FibNiEntry::FibEntries::FibNexthopEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "index" || name == "af" || name == "ifname" || name == "path-type" || name == "path-id" || name == "weight" || name == "encap" || name == "decap")
        return true;
    return false;
}

const Enum::YLeaf FibAddressFamily::fib_addr_fam_unknown {0, "fib-addr-fam-unknown"};
const Enum::YLeaf FibAddressFamily::fib_addr_fam_ipv4 {1, "fib-addr-fam-ipv4"};
const Enum::YLeaf FibAddressFamily::fib_addr_fam_ipv6 {2, "fib-addr-fam-ipv6"};

const Enum::YLeaf EncapsulationHeaderType::encap_hdr_type_unknown {0, "encap-hdr-type-unknown"};
const Enum::YLeaf EncapsulationHeaderType::encap_hdr_type_gre {1, "encap-hdr-type-gre"};
const Enum::YLeaf EncapsulationHeaderType::encap_hdr_type_ipv4 {2, "encap-hdr-type-ipv4"};
const Enum::YLeaf EncapsulationHeaderType::encap_hdr_type_ipv6 {3, "encap-hdr-type-ipv6"};
const Enum::YLeaf EncapsulationHeaderType::encap_hdr_type_mpls {4, "encap-hdr-type-mpls"};

const Enum::YLeaf FibPathType::fib_path_type_unknown {0, "fib-path-type-unknown"};
const Enum::YLeaf FibPathType::fib_path_type_receive {1, "fib-path-type-receive"};
const Enum::YLeaf FibPathType::fib_path_type_connected {2, "fib-path-type-connected"};
const Enum::YLeaf FibPathType::fib_path_type_attached_prefix {3, "fib-path-type-attached-prefix"};
const Enum::YLeaf FibPathType::fib_path_type_attached_host {4, "fib-path-type-attached-host"};
const Enum::YLeaf FibPathType::fib_path_type_attached_nexthop {5, "fib-path-type-attached-nexthop"};
const Enum::YLeaf FibPathType::fib_path_type_recursive {6, "fib-path-type-recursive"};
const Enum::YLeaf FibPathType::fib_path_type_adjacency_prefix {7, "fib-path-type-adjacency-prefix"};
const Enum::YLeaf FibPathType::fib_path_type_special_prefix {8, "fib-path-type-special-prefix"};


}
}

