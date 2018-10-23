
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_14.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_15.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs(this, {})
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs>();
        ent_->parent = this;
        srl_gs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srl_gs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ResvRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"}
        ,
    hop_extended_affinity(this, {})
{

    yang_name = "path-affinity-array"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop_extended_affinity.len(); index++)
    {
        if(hop_extended_affinity[index]->has_data())
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::has_operation() const
{
    for (std::size_t index=0; index<hop_extended_affinity.len(); index++)
    {
        if(hop_extended_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_affinity.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.yfilter)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop-extended-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity>();
        ent_->parent = this;
        hop_extended_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hop_extended_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity = value;
        hop_affinity.value_namespace = name_space;
        hop_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-extended-affinity" || name == "hop-address" || name == "hop-affinity")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::HopExtendedAffinity()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hop-extended-affinity"; yang_parent_name = "path-affinity-array"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::~HopExtendedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-extended-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::PathAffinityArray::HopExtendedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::ReverseEroIn::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::S2lSegmentRoutingPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::~S2lSegmentRoutingPath()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2l::S2lSegmentRoutingPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::P2pInfo()
    :
    is_bidirectional{YType::boolean, "is-bidirectional"}
        ,
    auto_bandwidth_status(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus>())
    , auto_bandwidth_config(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig>())
    , auto_bandwidth_oper(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper>())
{
    auto_bandwidth_status->parent = this;
    auto_bandwidth_config->parent = this;
    auto_bandwidth_oper->parent = this;

    yang_name = "p2p-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::~P2pInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_bidirectional.is_set
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_data())
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_data())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bidirectional.yfilter)
	|| (auto_bandwidth_status !=  nullptr && auto_bandwidth_status->has_operation())
	|| (auto_bandwidth_config !=  nullptr && auto_bandwidth_config->has_operation())
	|| (auto_bandwidth_oper !=  nullptr && auto_bandwidth_oper->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bidirectional.is_set || is_set(is_bidirectional.yfilter)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth-status")
    {
        if(auto_bandwidth_status == nullptr)
        {
            auto_bandwidth_status = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus>();
        }
        return auto_bandwidth_status;
    }

    if(child_yang_name == "auto-bandwidth-config")
    {
        if(auto_bandwidth_config == nullptr)
        {
            auto_bandwidth_config = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig>();
        }
        return auto_bandwidth_config;
    }

    if(child_yang_name == "auto-bandwidth-oper")
    {
        if(auto_bandwidth_oper == nullptr)
        {
            auto_bandwidth_oper = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper>();
        }
        return auto_bandwidth_oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_bandwidth_status != nullptr)
    {
        _children["auto-bandwidth-status"] = auto_bandwidth_status;
    }

    if(auto_bandwidth_config != nullptr)
    {
        _children["auto-bandwidth-config"] = auto_bandwidth_config;
    }

    if(auto_bandwidth_oper != nullptr)
    {
        _children["auto-bandwidth-oper"] = auto_bandwidth_oper;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
        is_bidirectional.value_namespace = name_space;
        is_bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth-status" || name == "auto-bandwidth-config" || name == "auto-bandwidth-oper" || name == "is-bidirectional")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::AutoBandwidthStatus()
    :
    is_auto_bandwidth_enabled{YType::boolean, "is-auto-bandwidth-enabled"},
    reactivation_time{YType::uint32, "reactivation-time"}
{

    yang_name = "auto-bandwidth-status"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::~AutoBandwidthStatus()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_auto_bandwidth_enabled.is_set
	|| reactivation_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_enabled.yfilter)
	|| ydk::is_set(reactivation_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_enabled.is_set || is_set(is_auto_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_enabled.get_name_leafdata());
    if (reactivation_time.is_set || is_set(reactivation_time.yfilter)) leaf_name_data.push_back(reactivation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled = value;
        is_auto_bandwidth_enabled.value_namespace = name_space;
        is_auto_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time = value;
        reactivation_time.value_namespace = name_space;
        reactivation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-enabled")
    {
        is_auto_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "reactivation-time")
    {
        reactivation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-enabled" || name == "reactivation-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::AutoBandwidthConfig()
    :
    is_auto_bandwidth_collect_only{YType::boolean, "is-auto-bandwidth-collect-only"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    maximum_bandwidth{YType::uint32, "maximum-bandwidth"},
    application_frequency{YType::uint32, "application-frequency"},
    collection_frequency{YType::uint32, "collection-frequency"},
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    resignal_last_bandwidth_enabled{YType::boolean, "resignal-last-bandwidth-enabled"},
    resignal_last_bandwidth_timeout{YType::uint32, "resignal-last-bandwidth-timeout"}
{

    yang_name = "auto-bandwidth-config"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::~AutoBandwidthConfig()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::has_data() const
{
    if (is_presence_container) return true;
    return is_auto_bandwidth_collect_only.is_set
	|| minimum_bandwidth.is_set
	|| maximum_bandwidth.is_set
	|| application_frequency.is_set
	|| collection_frequency.is_set
	|| adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| overflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set
	|| resignal_last_bandwidth_enabled.is_set
	|| resignal_last_bandwidth_timeout.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_auto_bandwidth_collect_only.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(maximum_bandwidth.yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(collection_frequency.yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_enabled.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_timeout.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_auto_bandwidth_collect_only.is_set || is_set(is_auto_bandwidth_collect_only.yfilter)) leaf_name_data.push_back(is_auto_bandwidth_collect_only.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (maximum_bandwidth.is_set || is_set(maximum_bandwidth.yfilter)) leaf_name_data.push_back(maximum_bandwidth.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_frequency.is_set || is_set(collection_frequency.yfilter)) leaf_name_data.push_back(collection_frequency.get_name_leafdata());
    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (resignal_last_bandwidth_enabled.is_set || is_set(resignal_last_bandwidth_enabled.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_enabled.get_name_leafdata());
    if (resignal_last_bandwidth_timeout.is_set || is_set(resignal_last_bandwidth_timeout.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-auto-bandwidth-collect-only")
    {
        is_auto_bandwidth_collect_only = value;
        is_auto_bandwidth_collect_only.value_namespace = name_space;
        is_auto_bandwidth_collect_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-bandwidth")
    {
        maximum_bandwidth = value;
        maximum_bandwidth.value_namespace = name_space;
        maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-frequency")
    {
        collection_frequency = value;
        collection_frequency.value_namespace = name_space;
        collection_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-enabled")
    {
        resignal_last_bandwidth_enabled = value;
        resignal_last_bandwidth_enabled.value_namespace = name_space;
        resignal_last_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-timeout")
    {
        resignal_last_bandwidth_timeout = value;
        resignal_last_bandwidth_timeout.value_namespace = name_space;
        resignal_last_bandwidth_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-auto-bandwidth-collect-only")
    {
        is_auto_bandwidth_collect_only.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-bandwidth")
    {
        maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "collection-frequency")
    {
        collection_frequency.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-enabled")
    {
        resignal_last_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-timeout")
    {
        resignal_last_bandwidth_timeout.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-auto-bandwidth-collect-only" || name == "minimum-bandwidth" || name == "maximum-bandwidth" || name == "application-frequency" || name == "collection-frequency" || name == "adjustment-threshold-percent" || name == "adjustment-threshold-value" || name == "overflow-threshold-percent" || name == "overflow-threshold-value" || name == "overflow-threshold-limit" || name == "underflow-threshold-percent" || name == "underflow-threshold-value" || name == "underflow-threshold-limit" || name == "resignal-last-bandwidth-enabled" || name == "resignal-last-bandwidth-timeout")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::AutoBandwidthOper()
    :
    last_bandwidth_applied{YType::uint32, "last-bandwidth-applied"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_applications{YType::uint32, "bandwidth-applications"},
    last_application_trigger{YType::enumeration, "last-application-trigger"},
    application_jitter{YType::uint32, "application-jitter"},
    time_left_application{YType::uint32, "time-left-application"},
    samples_collected{YType::uint32, "samples-collected"},
    time_left_collection{YType::uint32, "time-left-collection"},
    highest_bandwidth{YType::uint32, "highest-bandwidth"},
    underflow_highest_bandwidth{YType::uint32, "underflow-highest-bandwidth"},
    threshold_overflows{YType::uint32, "threshold-overflows"},
    overflow_early_bw_applications{YType::uint32, "overflow-early-bw-applications"},
    threshold_underflows{YType::uint32, "threshold-underflows"},
    underflow_early_bw_applications{YType::uint32, "underflow-early-bw-applications"},
    collect_only_requested_bandwidth{YType::uint32, "collect-only-requested-bandwidth"},
    application_reject_reason{YType::enumeration, "application-reject-reason"},
    resignal_last_bandwidth_expire_time{YType::uint32, "resignal-last-bandwidth-expire-time"}
{

    yang_name = "auto-bandwidth-oper"; yang_parent_name = "p2p-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::~AutoBandwidthOper()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::has_data() const
{
    if (is_presence_container) return true;
    return last_bandwidth_applied.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_applications.is_set
	|| last_application_trigger.is_set
	|| application_jitter.is_set
	|| time_left_application.is_set
	|| samples_collected.is_set
	|| time_left_collection.is_set
	|| highest_bandwidth.is_set
	|| underflow_highest_bandwidth.is_set
	|| threshold_overflows.is_set
	|| overflow_early_bw_applications.is_set
	|| threshold_underflows.is_set
	|| underflow_early_bw_applications.is_set
	|| collect_only_requested_bandwidth.is_set
	|| application_reject_reason.is_set
	|| resignal_last_bandwidth_expire_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_bandwidth_applied.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_applications.yfilter)
	|| ydk::is_set(last_application_trigger.yfilter)
	|| ydk::is_set(application_jitter.yfilter)
	|| ydk::is_set(time_left_application.yfilter)
	|| ydk::is_set(samples_collected.yfilter)
	|| ydk::is_set(time_left_collection.yfilter)
	|| ydk::is_set(highest_bandwidth.yfilter)
	|| ydk::is_set(underflow_highest_bandwidth.yfilter)
	|| ydk::is_set(threshold_overflows.yfilter)
	|| ydk::is_set(overflow_early_bw_applications.yfilter)
	|| ydk::is_set(threshold_underflows.yfilter)
	|| ydk::is_set(underflow_early_bw_applications.yfilter)
	|| ydk::is_set(collect_only_requested_bandwidth.yfilter)
	|| ydk::is_set(application_reject_reason.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_expire_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_bandwidth_applied.is_set || is_set(last_bandwidth_applied.yfilter)) leaf_name_data.push_back(last_bandwidth_applied.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_applications.is_set || is_set(bandwidth_applications.yfilter)) leaf_name_data.push_back(bandwidth_applications.get_name_leafdata());
    if (last_application_trigger.is_set || is_set(last_application_trigger.yfilter)) leaf_name_data.push_back(last_application_trigger.get_name_leafdata());
    if (application_jitter.is_set || is_set(application_jitter.yfilter)) leaf_name_data.push_back(application_jitter.get_name_leafdata());
    if (time_left_application.is_set || is_set(time_left_application.yfilter)) leaf_name_data.push_back(time_left_application.get_name_leafdata());
    if (samples_collected.is_set || is_set(samples_collected.yfilter)) leaf_name_data.push_back(samples_collected.get_name_leafdata());
    if (time_left_collection.is_set || is_set(time_left_collection.yfilter)) leaf_name_data.push_back(time_left_collection.get_name_leafdata());
    if (highest_bandwidth.is_set || is_set(highest_bandwidth.yfilter)) leaf_name_data.push_back(highest_bandwidth.get_name_leafdata());
    if (underflow_highest_bandwidth.is_set || is_set(underflow_highest_bandwidth.yfilter)) leaf_name_data.push_back(underflow_highest_bandwidth.get_name_leafdata());
    if (threshold_overflows.is_set || is_set(threshold_overflows.yfilter)) leaf_name_data.push_back(threshold_overflows.get_name_leafdata());
    if (overflow_early_bw_applications.is_set || is_set(overflow_early_bw_applications.yfilter)) leaf_name_data.push_back(overflow_early_bw_applications.get_name_leafdata());
    if (threshold_underflows.is_set || is_set(threshold_underflows.yfilter)) leaf_name_data.push_back(threshold_underflows.get_name_leafdata());
    if (underflow_early_bw_applications.is_set || is_set(underflow_early_bw_applications.yfilter)) leaf_name_data.push_back(underflow_early_bw_applications.get_name_leafdata());
    if (collect_only_requested_bandwidth.is_set || is_set(collect_only_requested_bandwidth.yfilter)) leaf_name_data.push_back(collect_only_requested_bandwidth.get_name_leafdata());
    if (application_reject_reason.is_set || is_set(application_reject_reason.yfilter)) leaf_name_data.push_back(application_reject_reason.get_name_leafdata());
    if (resignal_last_bandwidth_expire_time.is_set || is_set(resignal_last_bandwidth_expire_time.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_expire_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied = value;
        last_bandwidth_applied.value_namespace = name_space;
        last_bandwidth_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications = value;
        bandwidth_applications.value_namespace = name_space;
        bandwidth_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-trigger")
    {
        last_application_trigger = value;
        last_application_trigger.value_namespace = name_space;
        last_application_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-jitter")
    {
        application_jitter = value;
        application_jitter.value_namespace = name_space;
        application_jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-application")
    {
        time_left_application = value;
        time_left_application.value_namespace = name_space;
        time_left_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-collected")
    {
        samples_collected = value;
        samples_collected.value_namespace = name_space;
        samples_collected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left-collection")
    {
        time_left_collection = value;
        time_left_collection.value_namespace = name_space;
        time_left_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth = value;
        highest_bandwidth.value_namespace = name_space;
        highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-highest-bandwidth")
    {
        underflow_highest_bandwidth = value;
        underflow_highest_bandwidth.value_namespace = name_space;
        underflow_highest_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-overflows")
    {
        threshold_overflows = value;
        threshold_overflows.value_namespace = name_space;
        threshold_overflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-early-bw-applications")
    {
        overflow_early_bw_applications = value;
        overflow_early_bw_applications.value_namespace = name_space;
        overflow_early_bw_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-underflows")
    {
        threshold_underflows = value;
        threshold_underflows.value_namespace = name_space;
        threshold_underflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-early-bw-applications")
    {
        underflow_early_bw_applications = value;
        underflow_early_bw_applications.value_namespace = name_space;
        underflow_early_bw_applications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-only-requested-bandwidth")
    {
        collect_only_requested_bandwidth = value;
        collect_only_requested_bandwidth.value_namespace = name_space;
        collect_only_requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-reject-reason")
    {
        application_reject_reason = value;
        application_reject_reason.value_namespace = name_space;
        application_reject_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-expire-time")
    {
        resignal_last_bandwidth_expire_time = value;
        resignal_last_bandwidth_expire_time.value_namespace = name_space;
        resignal_last_bandwidth_expire_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-bandwidth-applied")
    {
        last_bandwidth_applied.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-applications")
    {
        bandwidth_applications.yfilter = yfilter;
    }
    if(value_path == "last-application-trigger")
    {
        last_application_trigger.yfilter = yfilter;
    }
    if(value_path == "application-jitter")
    {
        application_jitter.yfilter = yfilter;
    }
    if(value_path == "time-left-application")
    {
        time_left_application.yfilter = yfilter;
    }
    if(value_path == "samples-collected")
    {
        samples_collected.yfilter = yfilter;
    }
    if(value_path == "time-left-collection")
    {
        time_left_collection.yfilter = yfilter;
    }
    if(value_path == "highest-bandwidth")
    {
        highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "underflow-highest-bandwidth")
    {
        underflow_highest_bandwidth.yfilter = yfilter;
    }
    if(value_path == "threshold-overflows")
    {
        threshold_overflows.yfilter = yfilter;
    }
    if(value_path == "overflow-early-bw-applications")
    {
        overflow_early_bw_applications.yfilter = yfilter;
    }
    if(value_path == "threshold-underflows")
    {
        threshold_underflows.yfilter = yfilter;
    }
    if(value_path == "underflow-early-bw-applications")
    {
        underflow_early_bw_applications.yfilter = yfilter;
    }
    if(value_path == "collect-only-requested-bandwidth")
    {
        collect_only_requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "application-reject-reason")
    {
        application_reject_reason.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-expire-time")
    {
        resignal_last_bandwidth_expire_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::P2pInfo::AutoBandwidthOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-bandwidth-applied" || name == "bandwidth-pool-type" || name == "bandwidth-applications" || name == "last-application-trigger" || name == "application-jitter" || name == "time-left-application" || name == "samples-collected" || name == "time-left-collection" || name == "highest-bandwidth" || name == "underflow-highest-bandwidth" || name == "threshold-overflows" || name == "overflow-early-bw-applications" || name == "threshold-underflows" || name == "underflow-early-bw-applications" || name == "collect-only-requested-bandwidth" || name == "application-reject-reason" || name == "resignal-last-bandwidth-expire-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacity()
    :
    auto_capacity_configuration(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration>())
    , auto_capacity_stats(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats>())
    , clone(this, {})
{
    auto_capacity_configuration->parent = this;
    auto_capacity_stats->parent = this;

    yang_name = "auto-capacity"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::~AutoCapacity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clone.len(); index++)
    {
        if(clone[index]->has_data())
            return true;
    }
    return (auto_capacity_configuration !=  nullptr && auto_capacity_configuration->has_data())
	|| (auto_capacity_stats !=  nullptr && auto_capacity_stats->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::has_operation() const
{
    for (std::size_t index=0; index<clone.len(); index++)
    {
        if(clone[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (auto_capacity_configuration !=  nullptr && auto_capacity_configuration->has_operation())
	|| (auto_capacity_stats !=  nullptr && auto_capacity_stats->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-capacity-configuration")
    {
        if(auto_capacity_configuration == nullptr)
        {
            auto_capacity_configuration = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration>();
        }
        return auto_capacity_configuration;
    }

    if(child_yang_name == "auto-capacity-stats")
    {
        if(auto_capacity_stats == nullptr)
        {
            auto_capacity_stats = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats>();
        }
        return auto_capacity_stats;
    }

    if(child_yang_name == "clone")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone>();
        ent_->parent = this;
        clone.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_capacity_configuration != nullptr)
    {
        _children["auto-capacity-configuration"] = auto_capacity_configuration;
    }

    if(auto_capacity_stats != nullptr)
    {
        _children["auto-capacity-stats"] = auto_capacity_stats;
    }

    count_ = 0;
    for (auto ent_ : clone.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-capacity-configuration" || name == "auto-capacity-stats" || name == "clone")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::AutoCapacityConfiguration()
    :
    minimum_clones{YType::uint32, "minimum-clones"},
    maximum_clones{YType::uint32, "maximum-clones"},
    merge_bandwidth{YType::uint32, "merge-bandwidth"},
    split_bandwidth{YType::uint32, "split-bandwidth"},
    nominal_bandwidth{YType::uint32, "nominal-bandwidth"}
{

    yang_name = "auto-capacity-configuration"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::~AutoCapacityConfiguration()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return minimum_clones.is_set
	|| maximum_clones.is_set
	|| merge_bandwidth.is_set
	|| split_bandwidth.is_set
	|| nominal_bandwidth.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_clones.yfilter)
	|| ydk::is_set(maximum_clones.yfilter)
	|| ydk::is_set(merge_bandwidth.yfilter)
	|| ydk::is_set(split_bandwidth.yfilter)
	|| ydk::is_set(nominal_bandwidth.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_clones.is_set || is_set(minimum_clones.yfilter)) leaf_name_data.push_back(minimum_clones.get_name_leafdata());
    if (maximum_clones.is_set || is_set(maximum_clones.yfilter)) leaf_name_data.push_back(maximum_clones.get_name_leafdata());
    if (merge_bandwidth.is_set || is_set(merge_bandwidth.yfilter)) leaf_name_data.push_back(merge_bandwidth.get_name_leafdata());
    if (split_bandwidth.is_set || is_set(split_bandwidth.yfilter)) leaf_name_data.push_back(split_bandwidth.get_name_leafdata());
    if (nominal_bandwidth.is_set || is_set(nominal_bandwidth.yfilter)) leaf_name_data.push_back(nominal_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-clones")
    {
        minimum_clones = value;
        minimum_clones.value_namespace = name_space;
        minimum_clones.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-clones")
    {
        maximum_clones = value;
        maximum_clones.value_namespace = name_space;
        maximum_clones.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth = value;
        merge_bandwidth.value_namespace = name_space;
        merge_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth = value;
        split_bandwidth.value_namespace = name_space;
        split_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth = value;
        nominal_bandwidth.value_namespace = name_space;
        nominal_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-clones")
    {
        minimum_clones.yfilter = yfilter;
    }
    if(value_path == "maximum-clones")
    {
        maximum_clones.yfilter = yfilter;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth.yfilter = yfilter;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth.yfilter = yfilter;
    }
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-clones" || name == "maximum-clones" || name == "merge-bandwidth" || name == "split-bandwidth" || name == "nominal-bandwidth")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::AutoCapacityStats()
    :
    splits{YType::uint32, "splits"},
    merges{YType::uint32, "merges"},
    total_clones_created{YType::uint32, "total-clones-created"},
    total_clones_deleted{YType::uint32, "total-clones-deleted"},
    high_watermark_clones{YType::uint32, "high-watermark-clones"}
{

    yang_name = "auto-capacity-stats"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::~AutoCapacityStats()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::has_data() const
{
    if (is_presence_container) return true;
    return splits.is_set
	|| merges.is_set
	|| total_clones_created.is_set
	|| total_clones_deleted.is_set
	|| high_watermark_clones.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(splits.yfilter)
	|| ydk::is_set(merges.yfilter)
	|| ydk::is_set(total_clones_created.yfilter)
	|| ydk::is_set(total_clones_deleted.yfilter)
	|| ydk::is_set(high_watermark_clones.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (splits.is_set || is_set(splits.yfilter)) leaf_name_data.push_back(splits.get_name_leafdata());
    if (merges.is_set || is_set(merges.yfilter)) leaf_name_data.push_back(merges.get_name_leafdata());
    if (total_clones_created.is_set || is_set(total_clones_created.yfilter)) leaf_name_data.push_back(total_clones_created.get_name_leafdata());
    if (total_clones_deleted.is_set || is_set(total_clones_deleted.yfilter)) leaf_name_data.push_back(total_clones_deleted.get_name_leafdata());
    if (high_watermark_clones.is_set || is_set(high_watermark_clones.yfilter)) leaf_name_data.push_back(high_watermark_clones.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "splits")
    {
        splits = value;
        splits.value_namespace = name_space;
        splits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merges")
    {
        merges = value;
        merges.value_namespace = name_space;
        merges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-clones-created")
    {
        total_clones_created = value;
        total_clones_created.value_namespace = name_space;
        total_clones_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-clones-deleted")
    {
        total_clones_deleted = value;
        total_clones_deleted.value_namespace = name_space;
        total_clones_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-watermark-clones")
    {
        high_watermark_clones = value;
        high_watermark_clones.value_namespace = name_space;
        high_watermark_clones.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "splits")
    {
        splits.yfilter = yfilter;
    }
    if(value_path == "merges")
    {
        merges.yfilter = yfilter;
    }
    if(value_path == "total-clones-created")
    {
        total_clones_created.yfilter = yfilter;
    }
    if(value_path == "total-clones-deleted")
    {
        total_clones_deleted.yfilter = yfilter;
    }
    if(value_path == "high-watermark-clones")
    {
        high_watermark_clones.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::AutoCapacityStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "splits" || name == "merges" || name == "total-clones-created" || name == "total-clones-deleted" || name == "high-watermark-clones")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::Clone()
    :
    name{YType::str, "name"},
    creation_timestamp{YType::uint32, "creation-timestamp"},
    state{YType::enumeration, "state"},
    signaled_bandwidth{YType::uint32, "signaled-bandwidth"},
    current_bandwidth_demand{YType::uint32, "current-bandwidth-demand"}
{

    yang_name = "clone"; yang_parent_name = "auto-capacity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::~Clone()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| creation_timestamp.is_set
	|| state.is_set
	|| signaled_bandwidth.is_set
	|| current_bandwidth_demand.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(creation_timestamp.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter)
	|| ydk::is_set(current_bandwidth_demand.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (creation_timestamp.is_set || is_set(creation_timestamp.yfilter)) leaf_name_data.push_back(creation_timestamp.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (current_bandwidth_demand.is_set || is_set(current_bandwidth_demand.yfilter)) leaf_name_data.push_back(current_bandwidth_demand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-timestamp")
    {
        creation_timestamp = value;
        creation_timestamp.value_namespace = name_space;
        creation_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-bandwidth-demand")
    {
        current_bandwidth_demand = value;
        current_bandwidth_demand.value_namespace = name_space;
        current_bandwidth_demand.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "creation-timestamp")
    {
        creation_timestamp.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "current-bandwidth-demand")
    {
        current_bandwidth_demand.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoCapacity::Clone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "creation-timestamp" || name == "state" || name == "signaled-bandwidth" || name == "current-bandwidth-demand")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::History()
    :
    current_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup>())
    , reopt_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup>())
    , gmpls_path_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup>())
    , previous_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup>())
    , previous_gmpls_path_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup>())
    , gmpls_other_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup>())
    , gmpls_other_protect_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup>())
    , standby_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup>())
    , standby_reopt_setup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup>())
    , last_re_opt_fail(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail>())
    , last_stdby_re_opt_fail(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail>())
{
    current_setup->parent = this;
    reopt_setup->parent = this;
    gmpls_path_protect_setup->parent = this;
    previous_setup->parent = this;
    previous_gmpls_path_protect_setup->parent = this;
    gmpls_other_setup->parent = this;
    gmpls_other_protect_setup->parent = this;
    standby_setup->parent = this;
    standby_reopt_setup->parent = this;
    last_re_opt_fail->parent = this;
    last_stdby_re_opt_fail->parent = this;

    yang_name = "history"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::~History()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::has_data() const
{
    if (is_presence_container) return true;
    return (current_setup !=  nullptr && current_setup->has_data())
	|| (reopt_setup !=  nullptr && reopt_setup->has_data())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_data())
	|| (previous_setup !=  nullptr && previous_setup->has_data())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_data())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_data())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_data())
	|| (standby_setup !=  nullptr && standby_setup->has_data())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_data())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_data())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::has_operation() const
{
    return is_set(yfilter)
	|| (current_setup !=  nullptr && current_setup->has_operation())
	|| (reopt_setup !=  nullptr && reopt_setup->has_operation())
	|| (gmpls_path_protect_setup !=  nullptr && gmpls_path_protect_setup->has_operation())
	|| (previous_setup !=  nullptr && previous_setup->has_operation())
	|| (previous_gmpls_path_protect_setup !=  nullptr && previous_gmpls_path_protect_setup->has_operation())
	|| (gmpls_other_setup !=  nullptr && gmpls_other_setup->has_operation())
	|| (gmpls_other_protect_setup !=  nullptr && gmpls_other_protect_setup->has_operation())
	|| (standby_setup !=  nullptr && standby_setup->has_operation())
	|| (standby_reopt_setup !=  nullptr && standby_reopt_setup->has_operation())
	|| (last_re_opt_fail !=  nullptr && last_re_opt_fail->has_operation())
	|| (last_stdby_re_opt_fail !=  nullptr && last_stdby_re_opt_fail->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-setup")
    {
        if(current_setup == nullptr)
        {
            current_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup>();
        }
        return current_setup;
    }

    if(child_yang_name == "reopt-setup")
    {
        if(reopt_setup == nullptr)
        {
            reopt_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup>();
        }
        return reopt_setup;
    }

    if(child_yang_name == "gmpls-path-protect-setup")
    {
        if(gmpls_path_protect_setup == nullptr)
        {
            gmpls_path_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup>();
        }
        return gmpls_path_protect_setup;
    }

    if(child_yang_name == "previous-setup")
    {
        if(previous_setup == nullptr)
        {
            previous_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup>();
        }
        return previous_setup;
    }

    if(child_yang_name == "previous-gmpls-path-protect-setup")
    {
        if(previous_gmpls_path_protect_setup == nullptr)
        {
            previous_gmpls_path_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup>();
        }
        return previous_gmpls_path_protect_setup;
    }

    if(child_yang_name == "gmpls-other-setup")
    {
        if(gmpls_other_setup == nullptr)
        {
            gmpls_other_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup>();
        }
        return gmpls_other_setup;
    }

    if(child_yang_name == "gmpls-other-protect-setup")
    {
        if(gmpls_other_protect_setup == nullptr)
        {
            gmpls_other_protect_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup>();
        }
        return gmpls_other_protect_setup;
    }

    if(child_yang_name == "standby-setup")
    {
        if(standby_setup == nullptr)
        {
            standby_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup>();
        }
        return standby_setup;
    }

    if(child_yang_name == "standby-reopt-setup")
    {
        if(standby_reopt_setup == nullptr)
        {
            standby_reopt_setup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup>();
        }
        return standby_reopt_setup;
    }

    if(child_yang_name == "last-re-opt-fail")
    {
        if(last_re_opt_fail == nullptr)
        {
            last_re_opt_fail = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail>();
        }
        return last_re_opt_fail;
    }

    if(child_yang_name == "last-stdby-re-opt-fail")
    {
        if(last_stdby_re_opt_fail == nullptr)
        {
            last_stdby_re_opt_fail = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail>();
        }
        return last_stdby_re_opt_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_setup != nullptr)
    {
        _children["current-setup"] = current_setup;
    }

    if(reopt_setup != nullptr)
    {
        _children["reopt-setup"] = reopt_setup;
    }

    if(gmpls_path_protect_setup != nullptr)
    {
        _children["gmpls-path-protect-setup"] = gmpls_path_protect_setup;
    }

    if(previous_setup != nullptr)
    {
        _children["previous-setup"] = previous_setup;
    }

    if(previous_gmpls_path_protect_setup != nullptr)
    {
        _children["previous-gmpls-path-protect-setup"] = previous_gmpls_path_protect_setup;
    }

    if(gmpls_other_setup != nullptr)
    {
        _children["gmpls-other-setup"] = gmpls_other_setup;
    }

    if(gmpls_other_protect_setup != nullptr)
    {
        _children["gmpls-other-protect-setup"] = gmpls_other_protect_setup;
    }

    if(standby_setup != nullptr)
    {
        _children["standby-setup"] = standby_setup;
    }

    if(standby_reopt_setup != nullptr)
    {
        _children["standby-reopt-setup"] = standby_reopt_setup;
    }

    if(last_re_opt_fail != nullptr)
    {
        _children["last-re-opt-fail"] = last_re_opt_fail;
    }

    if(last_stdby_re_opt_fail != nullptr)
    {
        _children["last-stdby-re-opt-fail"] = last_stdby_re_opt_fail;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-setup" || name == "reopt-setup" || name == "gmpls-path-protect-setup" || name == "previous-setup" || name == "previous-gmpls-path-protect-setup" || name == "gmpls-other-setup" || name == "gmpls-other-protect-setup" || name == "standby-setup" || name == "standby-reopt-setup" || name == "last-re-opt-fail" || name == "last-stdby-re-opt-fail")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::CurrentSetup()
    :
    current_setup_timer{YType::uint32, "current-setup-timer"},
    selection_reason{YType::str, "selection-reason"},
    current_setup_last_error{YType::str, "current-setup-last-error"}
        ,
    connected_uptimes(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes>())
{
    connected_uptimes->parent = this;

    yang_name = "current-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::~CurrentSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::has_data() const
{
    if (is_presence_container) return true;
    return current_setup_timer.is_set
	|| selection_reason.is_set
	|| current_setup_last_error.is_set
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_setup_timer.yfilter)
	|| ydk::is_set(selection_reason.yfilter)
	|| ydk::is_set(current_setup_last_error.yfilter)
	|| (connected_uptimes !=  nullptr && connected_uptimes->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_setup_timer.is_set || is_set(current_setup_timer.yfilter)) leaf_name_data.push_back(current_setup_timer.get_name_leafdata());
    if (selection_reason.is_set || is_set(selection_reason.yfilter)) leaf_name_data.push_back(selection_reason.get_name_leafdata());
    if (current_setup_last_error.is_set || is_set(current_setup_last_error.yfilter)) leaf_name_data.push_back(current_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-uptimes")
    {
        if(connected_uptimes == nullptr)
        {
            connected_uptimes = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes>();
        }
        return connected_uptimes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_uptimes != nullptr)
    {
        _children["connected-uptimes"] = connected_uptimes;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-setup-timer")
    {
        current_setup_timer = value;
        current_setup_timer.value_namespace = name_space;
        current_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-reason")
    {
        selection_reason = value;
        selection_reason.value_namespace = name_space;
        selection_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-setup-last-error")
    {
        current_setup_last_error = value;
        current_setup_last_error.value_namespace = name_space;
        current_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-setup-timer")
    {
        current_setup_timer.yfilter = yfilter;
    }
    if(value_path == "selection-reason")
    {
        selection_reason.yfilter = yfilter;
    }
    if(value_path == "current-setup-last-error")
    {
        current_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-uptimes" || name == "current-setup-timer" || name == "selection-reason" || name == "current-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::ConnectedUptimes()
    :
    current_lsp_uptime{YType::uint32, "current-lsp-uptime"},
    current_uptime{YType::uint32, "current-uptime"}
{

    yang_name = "connected-uptimes"; yang_parent_name = "current-setup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::~ConnectedUptimes()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::has_data() const
{
    if (is_presence_container) return true;
    return current_lsp_uptime.is_set
	|| current_uptime.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_lsp_uptime.yfilter)
	|| ydk::is_set(current_uptime.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-uptimes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_lsp_uptime.is_set || is_set(current_lsp_uptime.yfilter)) leaf_name_data.push_back(current_lsp_uptime.get_name_leafdata());
    if (current_uptime.is_set || is_set(current_uptime.yfilter)) leaf_name_data.push_back(current_uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-lsp-uptime")
    {
        current_lsp_uptime = value;
        current_lsp_uptime.value_namespace = name_space;
        current_lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-uptime")
    {
        current_uptime = value;
        current_uptime.value_namespace = name_space;
        current_uptime.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-lsp-uptime")
    {
        current_lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "current-uptime")
    {
        current_uptime.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lsp-uptime" || name == "current-uptime")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::ReoptSetup()
    :
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"}
{

    yang_name = "reopt-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::~ReoptSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::has_data() const
{
    if (is_presence_container) return true;
    return reoptimized_setup_uptime.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reoptimized_setup_uptime.yfilter)
	|| ydk::is_set(reoptimized_setup_timer.yfilter)
	|| ydk::is_set(reoptimized_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reopt-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.yfilter)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.yfilter)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.yfilter)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
        reoptimized_setup_uptime.value_namespace = name_space;
        reoptimized_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
        reoptimized_setup_timer.value_namespace = name_space;
        reoptimized_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
        reoptimized_setup_last_error.value_namespace = name_space;
        reoptimized_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::ReoptSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reoptimized-setup-uptime" || name == "reoptimized-setup-timer" || name == "reoptimized-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::GmplsPathProtectSetup()
    :
    protecting_setup_uptime{YType::uint32, "protecting-setup-uptime"},
    protecting_setup_timer{YType::uint32, "protecting-setup-timer"},
    protecting_setup_last_error{YType::str, "protecting-setup-last-error"}
{

    yang_name = "gmpls-path-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::~GmplsPathProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return protecting_setup_uptime.is_set
	|| protecting_setup_timer.is_set
	|| protecting_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protecting_setup_uptime.yfilter)
	|| ydk::is_set(protecting_setup_timer.yfilter)
	|| ydk::is_set(protecting_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-path-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protecting_setup_uptime.is_set || is_set(protecting_setup_uptime.yfilter)) leaf_name_data.push_back(protecting_setup_uptime.get_name_leafdata());
    if (protecting_setup_timer.is_set || is_set(protecting_setup_timer.yfilter)) leaf_name_data.push_back(protecting_setup_timer.get_name_leafdata());
    if (protecting_setup_last_error.is_set || is_set(protecting_setup_last_error.yfilter)) leaf_name_data.push_back(protecting_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protecting-setup-uptime")
    {
        protecting_setup_uptime = value;
        protecting_setup_uptime.value_namespace = name_space;
        protecting_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protecting-setup-timer")
    {
        protecting_setup_timer = value;
        protecting_setup_timer.value_namespace = name_space;
        protecting_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protecting-setup-last-error")
    {
        protecting_setup_last_error = value;
        protecting_setup_last_error.value_namespace = name_space;
        protecting_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protecting-setup-uptime")
    {
        protecting_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "protecting-setup-timer")
    {
        protecting_setup_timer.yfilter = yfilter;
    }
    if(value_path == "protecting-setup-last-error")
    {
        protecting_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protecting-setup-uptime" || name == "protecting-setup-timer" || name == "protecting-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::PreviousSetup()
    :
    previous_path_option{YType::str, "previous-path-option"},
    previous_tunnel_instance{YType::uint32, "previous-tunnel-instance"},
    previous_fail_reason{YType::str, "previous-fail-reason"},
    previous_setup_last_error{YType::str, "previous-setup-last-error"}
{

    yang_name = "previous-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::~PreviousSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::has_data() const
{
    if (is_presence_container) return true;
    return previous_path_option.is_set
	|| previous_tunnel_instance.is_set
	|| previous_fail_reason.is_set
	|| previous_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous_path_option.yfilter)
	|| ydk::is_set(previous_tunnel_instance.yfilter)
	|| ydk::is_set(previous_fail_reason.yfilter)
	|| ydk::is_set(previous_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_path_option.is_set || is_set(previous_path_option.yfilter)) leaf_name_data.push_back(previous_path_option.get_name_leafdata());
    if (previous_tunnel_instance.is_set || is_set(previous_tunnel_instance.yfilter)) leaf_name_data.push_back(previous_tunnel_instance.get_name_leafdata());
    if (previous_fail_reason.is_set || is_set(previous_fail_reason.yfilter)) leaf_name_data.push_back(previous_fail_reason.get_name_leafdata());
    if (previous_setup_last_error.is_set || is_set(previous_setup_last_error.yfilter)) leaf_name_data.push_back(previous_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous-path-option")
    {
        previous_path_option = value;
        previous_path_option.value_namespace = name_space;
        previous_path_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-tunnel-instance")
    {
        previous_tunnel_instance = value;
        previous_tunnel_instance.value_namespace = name_space;
        previous_tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-fail-reason")
    {
        previous_fail_reason = value;
        previous_fail_reason.value_namespace = name_space;
        previous_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-setup-last-error")
    {
        previous_setup_last_error = value;
        previous_setup_last_error.value_namespace = name_space;
        previous_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous-path-option")
    {
        previous_path_option.yfilter = yfilter;
    }
    if(value_path == "previous-tunnel-instance")
    {
        previous_tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "previous-fail-reason")
    {
        previous_fail_reason.yfilter = yfilter;
    }
    if(value_path == "previous-setup-last-error")
    {
        previous_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous-path-option" || name == "previous-tunnel-instance" || name == "previous-fail-reason" || name == "previous-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::PreviousGmplsPathProtectSetup()
    :
    previous_protect_path_option{YType::str, "previous-protect-path-option"},
    previous_protect_tunnel_instance{YType::uint32, "previous-protect-tunnel-instance"},
    previous_protect_fail_reason{YType::str, "previous-protect-fail-reason"},
    previous_protect_setup_last_error{YType::str, "previous-protect-setup-last-error"}
{

    yang_name = "previous-gmpls-path-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::~PreviousGmplsPathProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return previous_protect_path_option.is_set
	|| previous_protect_tunnel_instance.is_set
	|| previous_protect_fail_reason.is_set
	|| previous_protect_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous_protect_path_option.yfilter)
	|| ydk::is_set(previous_protect_tunnel_instance.yfilter)
	|| ydk::is_set(previous_protect_fail_reason.yfilter)
	|| ydk::is_set(previous_protect_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-gmpls-path-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_protect_path_option.is_set || is_set(previous_protect_path_option.yfilter)) leaf_name_data.push_back(previous_protect_path_option.get_name_leafdata());
    if (previous_protect_tunnel_instance.is_set || is_set(previous_protect_tunnel_instance.yfilter)) leaf_name_data.push_back(previous_protect_tunnel_instance.get_name_leafdata());
    if (previous_protect_fail_reason.is_set || is_set(previous_protect_fail_reason.yfilter)) leaf_name_data.push_back(previous_protect_fail_reason.get_name_leafdata());
    if (previous_protect_setup_last_error.is_set || is_set(previous_protect_setup_last_error.yfilter)) leaf_name_data.push_back(previous_protect_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous-protect-path-option")
    {
        previous_protect_path_option = value;
        previous_protect_path_option.value_namespace = name_space;
        previous_protect_path_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-tunnel-instance")
    {
        previous_protect_tunnel_instance = value;
        previous_protect_tunnel_instance.value_namespace = name_space;
        previous_protect_tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-fail-reason")
    {
        previous_protect_fail_reason = value;
        previous_protect_fail_reason.value_namespace = name_space;
        previous_protect_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-protect-setup-last-error")
    {
        previous_protect_setup_last_error = value;
        previous_protect_setup_last_error.value_namespace = name_space;
        previous_protect_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous-protect-path-option")
    {
        previous_protect_path_option.yfilter = yfilter;
    }
    if(value_path == "previous-protect-tunnel-instance")
    {
        previous_protect_tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "previous-protect-fail-reason")
    {
        previous_protect_fail_reason.yfilter = yfilter;
    }
    if(value_path == "previous-protect-setup-last-error")
    {
        previous_protect_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous-protect-path-option" || name == "previous-protect-tunnel-instance" || name == "previous-protect-fail-reason" || name == "previous-protect-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::GmplsOtherSetup()
    :
    path_option_index{YType::uint32, "path-option-index"},
    other_setup_error{YType::str, "other-setup-error"}
{

    yang_name = "gmpls-other-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::~GmplsOtherSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::has_data() const
{
    if (is_presence_container) return true;
    return path_option_index.is_set
	|| other_setup_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(other_setup_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (other_setup_error.is_set || is_set(other_setup_error.yfilter)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
        other_setup_error.value_namespace = name_space;
        other_setup_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-index" || name == "other-setup-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::GmplsOtherProtectSetup()
    :
    path_option_index{YType::uint32, "path-option-index"},
    other_setup_error{YType::str, "other-setup-error"}
{

    yang_name = "gmpls-other-protect-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::~GmplsOtherProtectSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::has_data() const
{
    if (is_presence_container) return true;
    return path_option_index.is_set
	|| other_setup_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(other_setup_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-other-protect-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (other_setup_error.is_set || is_set(other_setup_error.yfilter)) leaf_name_data.push_back(other_setup_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error = value;
        other_setup_error.value_namespace = name_space;
        other_setup_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "other-setup-error")
    {
        other_setup_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-index" || name == "other-setup-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::StandbySetup()
    :
    standby_lsp_uptime{YType::uint32, "standby-lsp-uptime"},
    standby_setup_timer{YType::uint32, "standby-setup-timer"}
{

    yang_name = "standby-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::~StandbySetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::has_data() const
{
    if (is_presence_container) return true;
    return standby_lsp_uptime.is_set
	|| standby_setup_timer.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(standby_lsp_uptime.yfilter)
	|| ydk::is_set(standby_setup_timer.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (standby_lsp_uptime.is_set || is_set(standby_lsp_uptime.yfilter)) leaf_name_data.push_back(standby_lsp_uptime.get_name_leafdata());
    if (standby_setup_timer.is_set || is_set(standby_setup_timer.yfilter)) leaf_name_data.push_back(standby_setup_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "standby-lsp-uptime")
    {
        standby_lsp_uptime = value;
        standby_lsp_uptime.value_namespace = name_space;
        standby_lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-setup-timer")
    {
        standby_setup_timer = value;
        standby_setup_timer.value_namespace = name_space;
        standby_setup_timer.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "standby-lsp-uptime")
    {
        standby_lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "standby-setup-timer")
    {
        standby_setup_timer.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbySetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby-lsp-uptime" || name == "standby-setup-timer")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::StandbyReoptSetup()
    :
    reoptimized_setup_uptime{YType::uint32, "reoptimized-setup-uptime"},
    reoptimized_setup_timer{YType::uint32, "reoptimized-setup-timer"},
    reoptimized_setup_last_error{YType::str, "reoptimized-setup-last-error"}
{

    yang_name = "standby-reopt-setup"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::~StandbyReoptSetup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::has_data() const
{
    if (is_presence_container) return true;
    return reoptimized_setup_uptime.is_set
	|| reoptimized_setup_timer.is_set
	|| reoptimized_setup_last_error.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reoptimized_setup_uptime.yfilter)
	|| ydk::is_set(reoptimized_setup_timer.yfilter)
	|| ydk::is_set(reoptimized_setup_last_error.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-reopt-setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimized_setup_uptime.is_set || is_set(reoptimized_setup_uptime.yfilter)) leaf_name_data.push_back(reoptimized_setup_uptime.get_name_leafdata());
    if (reoptimized_setup_timer.is_set || is_set(reoptimized_setup_timer.yfilter)) leaf_name_data.push_back(reoptimized_setup_timer.get_name_leafdata());
    if (reoptimized_setup_last_error.is_set || is_set(reoptimized_setup_last_error.yfilter)) leaf_name_data.push_back(reoptimized_setup_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime = value;
        reoptimized_setup_uptime.value_namespace = name_space;
        reoptimized_setup_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer = value;
        reoptimized_setup_timer.value_namespace = name_space;
        reoptimized_setup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error = value;
        reoptimized_setup_last_error.value_namespace = name_space;
        reoptimized_setup_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reoptimized-setup-uptime")
    {
        reoptimized_setup_uptime.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-timer")
    {
        reoptimized_setup_timer.yfilter = yfilter;
    }
    if(value_path == "reoptimized-setup-last-error")
    {
        reoptimized_setup_last_error.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reoptimized-setup-uptime" || name == "reoptimized-setup-timer" || name == "reoptimized-setup-last-error")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::LastReOptFail()
    :
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"},
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"}
{

    yang_name = "last-re-opt-fail"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::~LastReOptFail()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::has_data() const
{
    if (is_presence_container) return true;
    return re_opt_last_fail_reason.is_set
	|| re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(re_opt_last_fail_reason.yfilter)
	|| ydk::is_set(re_opt_failed_destination.yfilter)
	|| ydk::is_set(re_opt_failed_timestamp.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-re-opt-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.yfilter)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());
    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.yfilter)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.yfilter)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
        re_opt_last_fail_reason.value_namespace = name_space;
        re_opt_last_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
        re_opt_failed_destination.value_namespace = name_space;
        re_opt_failed_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
        re_opt_failed_timestamp.value_namespace = name_space;
        re_opt_failed_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastReOptFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "re-opt-last-fail-reason" || name == "re-opt-failed-destination" || name == "re-opt-failed-timestamp")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::LastStdbyReOptFail()
    :
    re_opt_last_fail_reason{YType::enumeration, "re-opt-last-fail-reason"},
    re_opt_failed_destination{YType::str, "re-opt-failed-destination"},
    re_opt_failed_timestamp{YType::uint32, "re-opt-failed-timestamp"}
{

    yang_name = "last-stdby-re-opt-fail"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::~LastStdbyReOptFail()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::has_data() const
{
    if (is_presence_container) return true;
    return re_opt_last_fail_reason.is_set
	|| re_opt_failed_destination.is_set
	|| re_opt_failed_timestamp.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(re_opt_last_fail_reason.yfilter)
	|| ydk::is_set(re_opt_failed_destination.yfilter)
	|| ydk::is_set(re_opt_failed_timestamp.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-stdby-re-opt-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (re_opt_last_fail_reason.is_set || is_set(re_opt_last_fail_reason.yfilter)) leaf_name_data.push_back(re_opt_last_fail_reason.get_name_leafdata());
    if (re_opt_failed_destination.is_set || is_set(re_opt_failed_destination.yfilter)) leaf_name_data.push_back(re_opt_failed_destination.get_name_leafdata());
    if (re_opt_failed_timestamp.is_set || is_set(re_opt_failed_timestamp.yfilter)) leaf_name_data.push_back(re_opt_failed_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason = value;
        re_opt_last_fail_reason.value_namespace = name_space;
        re_opt_last_fail_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination = value;
        re_opt_failed_destination.value_namespace = name_space;
        re_opt_failed_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp = value;
        re_opt_failed_timestamp.value_namespace = name_space;
        re_opt_failed_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "re-opt-last-fail-reason")
    {
        re_opt_last_fail_reason.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-destination")
    {
        re_opt_failed_destination.yfilter = yfilter;
    }
    if(value_path == "re-opt-failed-timestamp")
    {
        re_opt_failed_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "re-opt-last-fail-reason" || name == "re-opt-failed-destination" || name == "re-opt-failed-timestamp")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::PathProtection()
    :
    time_of_switchover_sec{YType::uint32, "time-of-switchover-sec"},
    switchover_total{YType::uint16, "switchover-total"},
    switchover_ready{YType::uint16, "switchover-ready"},
    standby_reoptimized_number{YType::uint16, "standby-reoptimized-number"},
    switchover_reason{YType::uint16, "switchover-reason"},
    diversity_type{YType::enumeration, "diversity-type"},
    is_path_protect_configured{YType::boolean, "is-path-protect-configured"},
    path_protection_protected_by_id{YType::uint32, "path-protection-protected-by-id"},
    valid_path_protection_path_option_exists{YType::boolean, "valid-path-protection-path-option-exists"},
    is_path_protect_switch_over_underway{YType::boolean, "is-path-protect-switch-over-underway"},
    reoptimization_time_remaining{YType::uint32, "reoptimization-time-remaining"}
        ,
    switchover(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover>())
{
    switchover->parent = this;

    yang_name = "path-protection"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::~PathProtection()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::has_data() const
{
    if (is_presence_container) return true;
    return time_of_switchover_sec.is_set
	|| switchover_total.is_set
	|| switchover_ready.is_set
	|| standby_reoptimized_number.is_set
	|| switchover_reason.is_set
	|| diversity_type.is_set
	|| is_path_protect_configured.is_set
	|| path_protection_protected_by_id.is_set
	|| valid_path_protection_path_option_exists.is_set
	|| is_path_protect_switch_over_underway.is_set
	|| reoptimization_time_remaining.is_set
	|| (switchover !=  nullptr && switchover->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_of_switchover_sec.yfilter)
	|| ydk::is_set(switchover_total.yfilter)
	|| ydk::is_set(switchover_ready.yfilter)
	|| ydk::is_set(standby_reoptimized_number.yfilter)
	|| ydk::is_set(switchover_reason.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| ydk::is_set(is_path_protect_configured.yfilter)
	|| ydk::is_set(path_protection_protected_by_id.yfilter)
	|| ydk::is_set(valid_path_protection_path_option_exists.yfilter)
	|| ydk::is_set(is_path_protect_switch_over_underway.yfilter)
	|| ydk::is_set(reoptimization_time_remaining.yfilter)
	|| (switchover !=  nullptr && switchover->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_of_switchover_sec.is_set || is_set(time_of_switchover_sec.yfilter)) leaf_name_data.push_back(time_of_switchover_sec.get_name_leafdata());
    if (switchover_total.is_set || is_set(switchover_total.yfilter)) leaf_name_data.push_back(switchover_total.get_name_leafdata());
    if (switchover_ready.is_set || is_set(switchover_ready.yfilter)) leaf_name_data.push_back(switchover_ready.get_name_leafdata());
    if (standby_reoptimized_number.is_set || is_set(standby_reoptimized_number.yfilter)) leaf_name_data.push_back(standby_reoptimized_number.get_name_leafdata());
    if (switchover_reason.is_set || is_set(switchover_reason.yfilter)) leaf_name_data.push_back(switchover_reason.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());
    if (is_path_protect_configured.is_set || is_set(is_path_protect_configured.yfilter)) leaf_name_data.push_back(is_path_protect_configured.get_name_leafdata());
    if (path_protection_protected_by_id.is_set || is_set(path_protection_protected_by_id.yfilter)) leaf_name_data.push_back(path_protection_protected_by_id.get_name_leafdata());
    if (valid_path_protection_path_option_exists.is_set || is_set(valid_path_protection_path_option_exists.yfilter)) leaf_name_data.push_back(valid_path_protection_path_option_exists.get_name_leafdata());
    if (is_path_protect_switch_over_underway.is_set || is_set(is_path_protect_switch_over_underway.yfilter)) leaf_name_data.push_back(is_path_protect_switch_over_underway.get_name_leafdata());
    if (reoptimization_time_remaining.is_set || is_set(reoptimization_time_remaining.yfilter)) leaf_name_data.push_back(reoptimization_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchover")
    {
        if(switchover == nullptr)
        {
            switchover = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover>();
        }
        return switchover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchover != nullptr)
    {
        _children["switchover"] = switchover;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec = value;
        time_of_switchover_sec.value_namespace = name_space;
        time_of_switchover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-total")
    {
        switchover_total = value;
        switchover_total.value_namespace = name_space;
        switchover_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready = value;
        switchover_ready.value_namespace = name_space;
        switchover_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number = value;
        standby_reoptimized_number.value_namespace = name_space;
        standby_reoptimized_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason = value;
        switchover_reason.value_namespace = name_space;
        switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured = value;
        is_path_protect_configured.value_namespace = name_space;
        is_path_protect_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id = value;
        path_protection_protected_by_id.value_namespace = name_space;
        path_protection_protected_by_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists = value;
        valid_path_protection_path_option_exists.value_namespace = name_space;
        valid_path_protection_path_option_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway = value;
        is_path_protect_switch_over_underway.value_namespace = name_space;
        is_path_protect_switch_over_underway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining = value;
        reoptimization_time_remaining.value_namespace = name_space;
        reoptimization_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-of-switchover-sec")
    {
        time_of_switchover_sec.yfilter = yfilter;
    }
    if(value_path == "switchover-total")
    {
        switchover_total.yfilter = yfilter;
    }
    if(value_path == "switchover-ready")
    {
        switchover_ready.yfilter = yfilter;
    }
    if(value_path == "standby-reoptimized-number")
    {
        standby_reoptimized_number.yfilter = yfilter;
    }
    if(value_path == "switchover-reason")
    {
        switchover_reason.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-configured")
    {
        is_path_protect_configured.yfilter = yfilter;
    }
    if(value_path == "path-protection-protected-by-id")
    {
        path_protection_protected_by_id.yfilter = yfilter;
    }
    if(value_path == "valid-path-protection-path-option-exists")
    {
        valid_path_protection_path_option_exists.yfilter = yfilter;
    }
    if(value_path == "is-path-protect-switch-over-underway")
    {
        is_path_protect_switch_over_underway.yfilter = yfilter;
    }
    if(value_path == "reoptimization-time-remaining")
    {
        reoptimization_time_remaining.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover" || name == "time-of-switchover-sec" || name == "switchover-total" || name == "switchover-ready" || name == "standby-reoptimized-number" || name == "switchover-reason" || name == "diversity-type" || name == "is-path-protect-configured" || name == "path-protection-protected-by-id" || name == "valid-path-protection-path-option-exists" || name == "is-path-protect-switch-over-underway" || name == "reoptimization-time-remaining")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::Switchover()
    :
    path_protection_switchover_event_index{YType::uint32, "path-protection-switchover-event-index"},
    path_protection_tunnel_id{YType::uint16, "path-protection-tunnel-id"},
    from_lsp_id{YType::uint16, "from-lsp-id"},
    to_lsp_id{YType::uint16, "to-lsp-id"},
    date_of_error_detection{YType::uint32, "date-of-error-detection"},
    date_of_error_detection_millisec{YType::uint32, "date-of-error-detection-millisec"},
    switchover_duration_millisec{YType::uint32, "switchover-duration-millisec"},
    path_protection_switchover_reason{YType::enumeration, "path-protection-switchover-reason"}
{

    yang_name = "switchover"; yang_parent_name = "path-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::~Switchover()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::has_data() const
{
    if (is_presence_container) return true;
    return path_protection_switchover_event_index.is_set
	|| path_protection_tunnel_id.is_set
	|| from_lsp_id.is_set
	|| to_lsp_id.is_set
	|| date_of_error_detection.is_set
	|| date_of_error_detection_millisec.is_set
	|| switchover_duration_millisec.is_set
	|| path_protection_switchover_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_protection_switchover_event_index.yfilter)
	|| ydk::is_set(path_protection_tunnel_id.yfilter)
	|| ydk::is_set(from_lsp_id.yfilter)
	|| ydk::is_set(to_lsp_id.yfilter)
	|| ydk::is_set(date_of_error_detection.yfilter)
	|| ydk::is_set(date_of_error_detection_millisec.yfilter)
	|| ydk::is_set(switchover_duration_millisec.yfilter)
	|| ydk::is_set(path_protection_switchover_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_protection_switchover_event_index.is_set || is_set(path_protection_switchover_event_index.yfilter)) leaf_name_data.push_back(path_protection_switchover_event_index.get_name_leafdata());
    if (path_protection_tunnel_id.is_set || is_set(path_protection_tunnel_id.yfilter)) leaf_name_data.push_back(path_protection_tunnel_id.get_name_leafdata());
    if (from_lsp_id.is_set || is_set(from_lsp_id.yfilter)) leaf_name_data.push_back(from_lsp_id.get_name_leafdata());
    if (to_lsp_id.is_set || is_set(to_lsp_id.yfilter)) leaf_name_data.push_back(to_lsp_id.get_name_leafdata());
    if (date_of_error_detection.is_set || is_set(date_of_error_detection.yfilter)) leaf_name_data.push_back(date_of_error_detection.get_name_leafdata());
    if (date_of_error_detection_millisec.is_set || is_set(date_of_error_detection_millisec.yfilter)) leaf_name_data.push_back(date_of_error_detection_millisec.get_name_leafdata());
    if (switchover_duration_millisec.is_set || is_set(switchover_duration_millisec.yfilter)) leaf_name_data.push_back(switchover_duration_millisec.get_name_leafdata());
    if (path_protection_switchover_reason.is_set || is_set(path_protection_switchover_reason.yfilter)) leaf_name_data.push_back(path_protection_switchover_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index = value;
        path_protection_switchover_event_index.value_namespace = name_space;
        path_protection_switchover_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id = value;
        path_protection_tunnel_id.value_namespace = name_space;
        path_protection_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id = value;
        from_lsp_id.value_namespace = name_space;
        from_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id = value;
        to_lsp_id.value_namespace = name_space;
        to_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection = value;
        date_of_error_detection.value_namespace = name_space;
        date_of_error_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec = value;
        date_of_error_detection_millisec.value_namespace = name_space;
        date_of_error_detection_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec = value;
        switchover_duration_millisec.value_namespace = name_space;
        switchover_duration_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason = value;
        path_protection_switchover_reason.value_namespace = name_space;
        path_protection_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-protection-switchover-event-index")
    {
        path_protection_switchover_event_index.yfilter = yfilter;
    }
    if(value_path == "path-protection-tunnel-id")
    {
        path_protection_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "from-lsp-id")
    {
        from_lsp_id.yfilter = yfilter;
    }
    if(value_path == "to-lsp-id")
    {
        to_lsp_id.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection")
    {
        date_of_error_detection.yfilter = yfilter;
    }
    if(value_path == "date-of-error-detection-millisec")
    {
        date_of_error_detection_millisec.yfilter = yfilter;
    }
    if(value_path == "switchover-duration-millisec")
    {
        switchover_duration_millisec.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-reason")
    {
        path_protection_switchover_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-protection-switchover-event-index" || name == "path-protection-tunnel-id" || name == "from-lsp-id" || name == "to-lsp-id" || name == "date-of-error-detection" || name == "date-of-error-detection-millisec" || name == "switchover-duration-millisec" || name == "path-protection-switchover-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::AutoBackup()
    :
    protected_ls_ps{YType::uint32, "protected-ls-ps"},
    protected_s2_ls{YType::uint32, "protected-s2-ls"},
    sharing_families{YType::uint32, "sharing-families"},
    ab_protection_type{YType::enumeration, "ab-protection-type"},
    is_using_srlg{YType::boolean, "is-using-srlg"},
    srlg_prot_type{YType::enumeration, "srlg-prot-type"},
    ab_protected_interface{YType::str, "ab-protected-interface"},
    protected_address{YType::str, "protected-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    is_unused_removal_timer_running{YType::boolean, "is-unused-removal-timer-running"},
    unused_removal_remaining_time{YType::uint32, "unused-removal-remaining-time"}
        ,
    weighted_srlg_info(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo>())
    , iep(this, {})
{
    weighted_srlg_info->parent = this;

    yang_name = "auto-backup"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::~AutoBackup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iep.len(); index++)
    {
        if(iep[index]->has_data())
            return true;
    }
    return protected_ls_ps.is_set
	|| protected_s2_ls.is_set
	|| sharing_families.is_set
	|| ab_protection_type.is_set
	|| is_using_srlg.is_set
	|| srlg_prot_type.is_set
	|| ab_protected_interface.is_set
	|| protected_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| is_unused_removal_timer_running.is_set
	|| unused_removal_remaining_time.is_set
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::has_operation() const
{
    for (std::size_t index=0; index<iep.len(); index++)
    {
        if(iep[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protected_ls_ps.yfilter)
	|| ydk::is_set(protected_s2_ls.yfilter)
	|| ydk::is_set(sharing_families.yfilter)
	|| ydk::is_set(ab_protection_type.yfilter)
	|| ydk::is_set(is_using_srlg.yfilter)
	|| ydk::is_set(srlg_prot_type.yfilter)
	|| ydk::is_set(ab_protected_interface.yfilter)
	|| ydk::is_set(protected_address.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(is_unused_removal_timer_running.yfilter)
	|| ydk::is_set(unused_removal_remaining_time.yfilter)
	|| (weighted_srlg_info !=  nullptr && weighted_srlg_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_ls_ps.is_set || is_set(protected_ls_ps.yfilter)) leaf_name_data.push_back(protected_ls_ps.get_name_leafdata());
    if (protected_s2_ls.is_set || is_set(protected_s2_ls.yfilter)) leaf_name_data.push_back(protected_s2_ls.get_name_leafdata());
    if (sharing_families.is_set || is_set(sharing_families.yfilter)) leaf_name_data.push_back(sharing_families.get_name_leafdata());
    if (ab_protection_type.is_set || is_set(ab_protection_type.yfilter)) leaf_name_data.push_back(ab_protection_type.get_name_leafdata());
    if (is_using_srlg.is_set || is_set(is_using_srlg.yfilter)) leaf_name_data.push_back(is_using_srlg.get_name_leafdata());
    if (srlg_prot_type.is_set || is_set(srlg_prot_type.yfilter)) leaf_name_data.push_back(srlg_prot_type.get_name_leafdata());
    if (ab_protected_interface.is_set || is_set(ab_protected_interface.yfilter)) leaf_name_data.push_back(ab_protected_interface.get_name_leafdata());
    if (protected_address.is_set || is_set(protected_address.yfilter)) leaf_name_data.push_back(protected_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (is_unused_removal_timer_running.is_set || is_set(is_unused_removal_timer_running.yfilter)) leaf_name_data.push_back(is_unused_removal_timer_running.get_name_leafdata());
    if (unused_removal_remaining_time.is_set || is_set(unused_removal_remaining_time.yfilter)) leaf_name_data.push_back(unused_removal_remaining_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weighted-srlg-info")
    {
        if(weighted_srlg_info == nullptr)
        {
            weighted_srlg_info = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo>();
        }
        return weighted_srlg_info;
    }

    if(child_yang_name == "iep")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep>();
        ent_->parent = this;
        iep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(weighted_srlg_info != nullptr)
    {
        _children["weighted-srlg-info"] = weighted_srlg_info;
    }

    count_ = 0;
    for (auto ent_ : iep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps = value;
        protected_ls_ps.value_namespace = name_space;
        protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls = value;
        protected_s2_ls.value_namespace = name_space;
        protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-families")
    {
        sharing_families = value;
        sharing_families.value_namespace = name_space;
        sharing_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type = value;
        ab_protection_type.value_namespace = name_space;
        ab_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg = value;
        is_using_srlg.value_namespace = name_space;
        is_using_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type = value;
        srlg_prot_type.value_namespace = name_space;
        srlg_prot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface = value;
        ab_protected_interface.value_namespace = name_space;
        ab_protected_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-address")
    {
        protected_address = value;
        protected_address.value_namespace = name_space;
        protected_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running = value;
        is_unused_removal_timer_running.value_namespace = name_space;
        is_unused_removal_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time = value;
        unused_removal_remaining_time.value_namespace = name_space;
        unused_removal_remaining_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-ls-ps")
    {
        protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "protected-s2-ls")
    {
        protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "sharing-families")
    {
        sharing_families.yfilter = yfilter;
    }
    if(value_path == "ab-protection-type")
    {
        ab_protection_type.yfilter = yfilter;
    }
    if(value_path == "is-using-srlg")
    {
        is_using_srlg.yfilter = yfilter;
    }
    if(value_path == "srlg-prot-type")
    {
        srlg_prot_type.yfilter = yfilter;
    }
    if(value_path == "ab-protected-interface")
    {
        ab_protected_interface.yfilter = yfilter;
    }
    if(value_path == "protected-address")
    {
        protected_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "is-unused-removal-timer-running")
    {
        is_unused_removal_timer_running.yfilter = yfilter;
    }
    if(value_path == "unused-removal-remaining-time")
    {
        unused_removal_remaining_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weighted-srlg-info" || name == "iep" || name == "protected-ls-ps" || name == "protected-s2-ls" || name == "sharing-families" || name == "ab-protection-type" || name == "is-using-srlg" || name == "srlg-prot-type" || name == "ab-protected-interface" || name == "protected-address" || name == "tunnel-attribute-set-name" || name == "is-unused-removal-timer-running" || name == "unused-removal-remaining-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgInfo()
    :
    protected_interface_srlg(this, {})
    , weighted_srlg_hop(this, {})
{

    yang_name = "weighted-srlg-info"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::~WeightedSrlgInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_interface_srlg.len(); index++)
    {
        if(protected_interface_srlg[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.len(); index++)
    {
        if(weighted_srlg_hop[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_operation() const
{
    for (std::size_t index=0; index<protected_interface_srlg.len(); index++)
    {
        if(protected_interface_srlg[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<weighted_srlg_hop.len(); index++)
    {
        if(weighted_srlg_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg>();
        ent_->parent = this;
        protected_interface_srlg.append(ent_);
        return ent_;
    }

    if(child_yang_name == "weighted-srlg-hop")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop>();
        ent_->parent = this;
        weighted_srlg_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protected_interface_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : weighted_srlg_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface-srlg" || name == "weighted-srlg-hop")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::ProtectedInterfaceSrlg()
    :
    srlg{YType::uint32, "srlg"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
{

    yang_name = "protected-interface-srlg"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::~ProtectedInterfaceSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_data() const
{
    if (is_presence_container) return true;
    return srlg.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::WeightedSrlgHop()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"},
    aggregate_admin_weight{YType::uint64, "aggregate-admin-weight"}
        ,
    common_srlg(this, {})
{

    yang_name = "weighted-srlg-hop"; yang_parent_name = "weighted-srlg-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::~WeightedSrlgHop()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<common_srlg.len(); index++)
    {
        if(common_srlg[index]->has_data())
            return true;
    }
    return from_address.is_set
	|| to_address.is_set
	|| aggregate_admin_weight.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_operation() const
{
    for (std::size_t index=0; index<common_srlg.len(); index++)
    {
        if(common_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter)
	|| ydk::is_set(aggregate_admin_weight.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighted-srlg-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());
    if (aggregate_admin_weight.is_set || is_set(aggregate_admin_weight.yfilter)) leaf_name_data.push_back(aggregate_admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg>();
        ent_->parent = this;
        common_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : common_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight = value;
        aggregate_admin_weight.value_namespace = name_space;
        aggregate_admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
    if(value_path == "aggregate-admin-weight")
    {
        aggregate_admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-srlg" || name == "from-address" || name == "to-address" || name == "aggregate-admin-weight")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::CommonSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "common-srlg"; yang_parent_name = "weighted-srlg-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::~CommonSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::Iep()
    :
    path_option_id{YType::uint32, "path-option-id"}
        ,
    iep_hop(this, {})
{

    yang_name = "iep"; yang_parent_name = "auto-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::~Iep()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iep_hop.len(); index++)
    {
        if(iep_hop[index]->has_data())
            return true;
    }
    return path_option_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_operation() const
{
    for (std::size_t index=0; index<iep_hop.len(); index++)
    {
        if(iep_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(path_option_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_option_id.is_set || is_set(path_option_id.yfilter)) leaf_name_data.push_back(path_option_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iep-hop")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop>();
        ent_->parent = this;
        iep_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iep_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-option-id")
    {
        path_option_id = value;
        path_option_id.value_namespace = name_space;
        path_option_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-option-id")
    {
        path_option_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iep-hop" || name == "path-option-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::IepHop()
    :
    hop_index{YType::uint32, "hop-index"},
    iep_hop_type{YType::enumeration, "iep-hop-type"},
    iep_hop_address{YType::str, "iep-hop-address"}
{

    yang_name = "iep-hop"; yang_parent_name = "iep"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::~IepHop()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| iep_hop_type.is_set
	|| iep_hop_address.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| ydk::is_set(iep_hop_type.yfilter)
	|| ydk::is_set(iep_hop_address.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iep-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (iep_hop_type.is_set || is_set(iep_hop_type.yfilter)) leaf_name_data.push_back(iep_hop_type.get_name_leafdata());
    if (iep_hop_address.is_set || is_set(iep_hop_address.yfilter)) leaf_name_data.push_back(iep_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type = value;
        iep_hop_type.value_namespace = name_space;
        iep_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address = value;
        iep_hop_address.value_namespace = name_space;
        iep_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
    if(value_path == "iep-hop-type")
    {
        iep_hop_type.yfilter = yfilter;
    }
    if(value_path == "iep-hop-address")
    {
        iep_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-index" || name == "iep-hop-type" || name == "iep-hop-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::AutoMesh()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_destination_list_name{YType::str, "tunnel-destination-list-name"},
    is_tunnel_unused_timer_running{YType::boolean, "is-tunnel-unused-timer-running"},
    remaining_unused_time{YType::uint32, "remaining-unused-time"},
    mesh_group_type{YType::enumeration, "mesh-group-type"}
{

    yang_name = "auto-mesh"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::~AutoMesh()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::has_data() const
{
    if (is_presence_container) return true;
    return mesh_group_id.is_set
	|| tunnel_destination_list_name.is_set
	|| is_tunnel_unused_timer_running.is_set
	|| remaining_unused_time.is_set
	|| mesh_group_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_destination_list_name.yfilter)
	|| ydk::is_set(is_tunnel_unused_timer_running.yfilter)
	|| ydk::is_set(remaining_unused_time.yfilter)
	|| ydk::is_set(mesh_group_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_destination_list_name.is_set || is_set(tunnel_destination_list_name.yfilter)) leaf_name_data.push_back(tunnel_destination_list_name.get_name_leafdata());
    if (is_tunnel_unused_timer_running.is_set || is_set(is_tunnel_unused_timer_running.yfilter)) leaf_name_data.push_back(is_tunnel_unused_timer_running.get_name_leafdata());
    if (remaining_unused_time.is_set || is_set(remaining_unused_time.yfilter)) leaf_name_data.push_back(remaining_unused_time.get_name_leafdata());
    if (mesh_group_type.is_set || is_set(mesh_group_type.yfilter)) leaf_name_data.push_back(mesh_group_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name = value;
        tunnel_destination_list_name.value_namespace = name_space;
        tunnel_destination_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running = value;
        is_tunnel_unused_timer_running.value_namespace = name_space;
        is_tunnel_unused_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time = value;
        remaining_unused_time.value_namespace = name_space;
        remaining_unused_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type = value;
        mesh_group_type.value_namespace = name_space;
        mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-destination-list-name")
    {
        tunnel_destination_list_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-unused-timer-running")
    {
        is_tunnel_unused_timer_running.yfilter = yfilter;
    }
    if(value_path == "remaining-unused-time")
    {
        remaining_unused_time.yfilter = yfilter;
    }
    if(value_path == "mesh-group-type")
    {
        mesh_group_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoMesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-id" || name == "tunnel-destination-list-name" || name == "is-tunnel-unused-timer-running" || name == "remaining-unused-time" || name == "mesh-group-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::AutoPcc()
    :
    owner_address{YType::str, "owner-address"},
    creator_address{YType::str, "creator-address"},
    has_creator_id{YType::boolean, "has-creator-id"},
    creator_id{YType::str, "creator-id"},
    plspid{YType::uint32, "plspid"},
    symbolic_name{YType::str, "symbolic-name"},
    operationally_up{YType::boolean, "operationally-up"}
{

    yang_name = "auto-pcc"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::~AutoPcc()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::has_data() const
{
    if (is_presence_container) return true;
    return owner_address.is_set
	|| creator_address.is_set
	|| has_creator_id.is_set
	|| creator_id.is_set
	|| plspid.is_set
	|| symbolic_name.is_set
	|| operationally_up.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner_address.yfilter)
	|| ydk::is_set(creator_address.yfilter)
	|| ydk::is_set(has_creator_id.yfilter)
	|| ydk::is_set(creator_id.yfilter)
	|| ydk::is_set(plspid.yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(operationally_up.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner_address.is_set || is_set(owner_address.yfilter)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (creator_address.is_set || is_set(creator_address.yfilter)) leaf_name_data.push_back(creator_address.get_name_leafdata());
    if (has_creator_id.is_set || is_set(has_creator_id.yfilter)) leaf_name_data.push_back(has_creator_id.get_name_leafdata());
    if (creator_id.is_set || is_set(creator_id.yfilter)) leaf_name_data.push_back(creator_id.get_name_leafdata());
    if (plspid.is_set || is_set(plspid.yfilter)) leaf_name_data.push_back(plspid.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.yfilter)) leaf_name_data.push_back(operationally_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner-address")
    {
        owner_address = value;
        owner_address.value_namespace = name_space;
        owner_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator-address")
    {
        creator_address = value;
        creator_address.value_namespace = name_space;
        creator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id = value;
        has_creator_id.value_namespace = name_space;
        has_creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creator-id")
    {
        creator_id = value;
        creator_id.value_namespace = name_space;
        creator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plspid")
    {
        plspid = value;
        plspid.value_namespace = name_space;
        plspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
        operationally_up.value_namespace = name_space;
        operationally_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner-address")
    {
        owner_address.yfilter = yfilter;
    }
    if(value_path == "creator-address")
    {
        creator_address.yfilter = yfilter;
    }
    if(value_path == "has-creator-id")
    {
        has_creator_id.yfilter = yfilter;
    }
    if(value_path == "creator-id")
    {
        creator_id.yfilter = yfilter;
    }
    if(value_path == "plspid")
    {
        plspid.yfilter = yfilter;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "operationally-up")
    {
        operationally_up.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::AutoPcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-address" || name == "creator-address" || name == "has-creator-id" || name == "creator-id" || name == "plspid" || name == "symbolic-name" || name == "operationally-up")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::PceDelegation()
    :
    plsp_id{YType::uint32, "plsp-id"},
    symbolic_name{YType::str, "symbolic-name"},
    owner_address{YType::str, "owner-address"},
    operationally_up{YType::boolean, "operationally-up"}
{

    yang_name = "pce-delegation"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::~PceDelegation()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::has_data() const
{
    if (is_presence_container) return true;
    return plsp_id.is_set
	|| symbolic_name.is_set
	|| owner_address.is_set
	|| operationally_up.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(owner_address.yfilter)
	|| ydk::is_set(operationally_up.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-delegation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (owner_address.is_set || is_set(owner_address.yfilter)) leaf_name_data.push_back(owner_address.get_name_leafdata());
    if (operationally_up.is_set || is_set(operationally_up.yfilter)) leaf_name_data.push_back(operationally_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner-address")
    {
        owner_address = value;
        owner_address.value_namespace = name_space;
        owner_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationally-up")
    {
        operationally_up = value;
        operationally_up.value_namespace = name_space;
        operationally_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "owner-address")
    {
        owner_address.yfilter = yfilter;
    }
    if(value_path == "operationally-up")
    {
        operationally_up.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::PceDelegation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plsp-id" || name == "symbolic-name" || name == "owner-address" || name == "operationally-up")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemption()
    :
    status{YType::enumeration, "status"},
    time_in_preemption_pending{YType::uint16, "time-in-preemption-pending"},
    preemption_pending_resolution{YType::enumeration, "preemption-pending-resolution"}
        ,
    soft_preemption_counters(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters>())
    , soft_preemption_path_error(this, {})
{
    soft_preemption_counters->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<soft_preemption_path_error.len(); index++)
    {
        if(soft_preemption_path_error[index]->has_data())
            return true;
    }
    return status.is_set
	|| time_in_preemption_pending.is_set
	|| preemption_pending_resolution.is_set
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption_path_error.len(); index++)
    {
        if(soft_preemption_path_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(time_in_preemption_pending.yfilter)
	|| ydk::is_set(preemption_pending_resolution.yfilter)
	|| (soft_preemption_counters !=  nullptr && soft_preemption_counters->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (time_in_preemption_pending.is_set || is_set(time_in_preemption_pending.yfilter)) leaf_name_data.push_back(time_in_preemption_pending.get_name_leafdata());
    if (preemption_pending_resolution.is_set || is_set(preemption_pending_resolution.yfilter)) leaf_name_data.push_back(preemption_pending_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption-counters")
    {
        if(soft_preemption_counters == nullptr)
        {
            soft_preemption_counters = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters>();
        }
        return soft_preemption_counters;
    }

    if(child_yang_name == "soft-preemption-path-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError>();
        ent_->parent = this;
        soft_preemption_path_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(soft_preemption_counters != nullptr)
    {
        _children["soft-preemption-counters"] = soft_preemption_counters;
    }

    count_ = 0;
    for (auto ent_ : soft_preemption_path_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending = value;
        time_in_preemption_pending.value_namespace = name_space;
        time_in_preemption_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution = value;
        preemption_pending_resolution.value_namespace = name_space;
        preemption_pending_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending")
    {
        time_in_preemption_pending.yfilter = yfilter;
    }
    if(value_path == "preemption-pending-resolution")
    {
        preemption_pending_resolution.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption-counters" || name == "soft-preemption-path-error" || name == "status" || name == "time-in-preemption-pending" || name == "preemption-pending-resolution")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::SoftPreemptionCounters()
    :
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    reopt_completed_ls_ps{YType::uint32, "reopt-completed-ls-ps"},
    torn_down_ls_ps{YType::uint32, "torn-down-ls-ps"},
    path_protection_switchover_ls_ps{YType::uint32, "path-protection-switchover-ls-ps"},
    frr_triggered_ls_ps{YType::uint32, "frr-triggered-ls-ps"},
    time_in_preemption_pending_min{YType::uint16, "time-in-preemption-pending-min"},
    time_in_preemption_pending_max{YType::uint16, "time-in-preemption-pending-max"},
    time_in_preemption_pending_avg{YType::uint16, "time-in-preemption-pending-avg"}
{

    yang_name = "soft-preemption-counters"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::~SoftPreemptionCounters()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::has_data() const
{
    if (is_presence_container) return true;
    return soft_preemption_events.is_set
	|| reopt_completed_ls_ps.is_set
	|| torn_down_ls_ps.is_set
	|| path_protection_switchover_ls_ps.is_set
	|| frr_triggered_ls_ps.is_set
	|| time_in_preemption_pending_min.is_set
	|| time_in_preemption_pending_max.is_set
	|| time_in_preemption_pending_avg.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(reopt_completed_ls_ps.yfilter)
	|| ydk::is_set(torn_down_ls_ps.yfilter)
	|| ydk::is_set(path_protection_switchover_ls_ps.yfilter)
	|| ydk::is_set(frr_triggered_ls_ps.yfilter)
	|| ydk::is_set(time_in_preemption_pending_min.yfilter)
	|| ydk::is_set(time_in_preemption_pending_max.yfilter)
	|| ydk::is_set(time_in_preemption_pending_avg.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (reopt_completed_ls_ps.is_set || is_set(reopt_completed_ls_ps.yfilter)) leaf_name_data.push_back(reopt_completed_ls_ps.get_name_leafdata());
    if (torn_down_ls_ps.is_set || is_set(torn_down_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_ls_ps.get_name_leafdata());
    if (path_protection_switchover_ls_ps.is_set || is_set(path_protection_switchover_ls_ps.yfilter)) leaf_name_data.push_back(path_protection_switchover_ls_ps.get_name_leafdata());
    if (frr_triggered_ls_ps.is_set || is_set(frr_triggered_ls_ps.yfilter)) leaf_name_data.push_back(frr_triggered_ls_ps.get_name_leafdata());
    if (time_in_preemption_pending_min.is_set || is_set(time_in_preemption_pending_min.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_min.get_name_leafdata());
    if (time_in_preemption_pending_max.is_set || is_set(time_in_preemption_pending_max.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_max.get_name_leafdata());
    if (time_in_preemption_pending_avg.is_set || is_set(time_in_preemption_pending_avg.yfilter)) leaf_name_data.push_back(time_in_preemption_pending_avg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps = value;
        reopt_completed_ls_ps.value_namespace = name_space;
        reopt_completed_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps = value;
        torn_down_ls_ps.value_namespace = name_space;
        torn_down_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps = value;
        path_protection_switchover_ls_ps.value_namespace = name_space;
        path_protection_switchover_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps = value;
        frr_triggered_ls_ps.value_namespace = name_space;
        frr_triggered_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min = value;
        time_in_preemption_pending_min.value_namespace = name_space;
        time_in_preemption_pending_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max = value;
        time_in_preemption_pending_max.value_namespace = name_space;
        time_in_preemption_pending_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg = value;
        time_in_preemption_pending_avg.value_namespace = name_space;
        time_in_preemption_pending_avg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "reopt-completed-ls-ps")
    {
        reopt_completed_ls_ps.yfilter = yfilter;
    }
    if(value_path == "torn-down-ls-ps")
    {
        torn_down_ls_ps.yfilter = yfilter;
    }
    if(value_path == "path-protection-switchover-ls-ps")
    {
        path_protection_switchover_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-triggered-ls-ps")
    {
        frr_triggered_ls_ps.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-min")
    {
        time_in_preemption_pending_min.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-max")
    {
        time_in_preemption_pending_max.yfilter = yfilter;
    }
    if(value_path == "time-in-preemption-pending-avg")
    {
        time_in_preemption_pending_avg.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption-events" || name == "reopt-completed-ls-ps" || name == "torn-down-ls-ps" || name == "path-protection-switchover-ls-ps" || name == "frr-triggered-ls-ps" || name == "time-in-preemption-pending-min" || name == "time-in-preemption-pending-max" || name == "time-in-preemption-pending-avg")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::SoftPreemptionPathError()
    :
    timestamp{YType::uint32, "timestamp"},
    preempting_link_address{YType::str, "preempting-link-address"}
{

    yang_name = "soft-preemption-path-error"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::~SoftPreemptionPathError()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set
	|| preempting_link_address.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(preempting_link_address.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-path-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (preempting_link_address.is_set || is_set(preempting_link_address.yfilter)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
        preempting_link_address.value_namespace = name_space;
        preempting_link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::SoftPreemption::SoftPreemptionPathError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "preempting-link-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::WdmUnitunnel()
    :
    tunnel_state{YType::enumeration, "tunnel-state"},
    tunnel_role{YType::enumeration, "tunnel-role"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    local_optical_router_id{YType::str, "local-optical-router-id"},
    remote_optical_router_id{YType::str, "remote-optical-router-id"},
    controlled_interface{YType::str, "controlled-interface"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    label_origin{YType::enumeration, "label-origin"},
    srlg_discovery{YType::boolean, "srlg-discovery"}
{

    yang_name = "wdm-unitunnel"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::~WdmUnitunnel()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_state.is_set
	|| tunnel_role.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| local_optical_router_id.is_set
	|| remote_optical_router_id.is_set
	|| controlled_interface.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| label_origin.is_set
	|| srlg_discovery.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(tunnel_role.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(local_optical_router_id.yfilter)
	|| ydk::is_set(remote_optical_router_id.yfilter)
	|| ydk::is_set(controlled_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(label_origin.yfilter)
	|| ydk::is_set(srlg_discovery.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm-unitunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (tunnel_role.is_set || is_set(tunnel_role.yfilter)) leaf_name_data.push_back(tunnel_role.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (local_optical_router_id.is_set || is_set(local_optical_router_id.yfilter)) leaf_name_data.push_back(local_optical_router_id.get_name_leafdata());
    if (remote_optical_router_id.is_set || is_set(remote_optical_router_id.yfilter)) leaf_name_data.push_back(remote_optical_router_id.get_name_leafdata());
    if (controlled_interface.is_set || is_set(controlled_interface.yfilter)) leaf_name_data.push_back(controlled_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (label_origin.is_set || is_set(label_origin.yfilter)) leaf_name_data.push_back(label_origin.get_name_leafdata());
    if (srlg_discovery.is_set || is_set(srlg_discovery.yfilter)) leaf_name_data.push_back(srlg_discovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-role")
    {
        tunnel_role = value;
        tunnel_role.value_namespace = name_space;
        tunnel_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-optical-router-id")
    {
        local_optical_router_id = value;
        local_optical_router_id.value_namespace = name_space;
        local_optical_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-optical-router-id")
    {
        remote_optical_router_id = value;
        remote_optical_router_id.value_namespace = name_space;
        remote_optical_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlled-interface")
    {
        controlled_interface = value;
        controlled_interface.value_namespace = name_space;
        controlled_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-origin")
    {
        label_origin = value;
        label_origin.value_namespace = name_space;
        label_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-discovery")
    {
        srlg_discovery = value;
        srlg_discovery.value_namespace = name_space;
        srlg_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-role")
    {
        tunnel_role.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "local-optical-router-id")
    {
        local_optical_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-optical-router-id")
    {
        remote_optical_router_id.yfilter = yfilter;
    }
    if(value_path == "controlled-interface")
    {
        controlled_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "label-origin")
    {
        label_origin.yfilter = yfilter;
    }
    if(value_path == "srlg-discovery")
    {
        srlg_discovery.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::WdmUnitunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-state" || name == "tunnel-role" || name == "tunnel-id" || name == "lsp-id" || name == "local-optical-router-id" || name == "remote-optical-router-id" || name == "controlled-interface" || name == "source-address" || name == "destination-address" || name == "extended-tunnel-id" || name == "label-origin" || name == "srlg-discovery")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::TransportTunnelInfo()
    :
    status_homepath_working{YType::boolean, "status-homepath-working"}
        ,
    otn(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn>())
    , static_uni(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni>())
    , egress_static_uni(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni>())
    , homepath_ero(this, {})
    , diversity_info(this, {})
{
    otn->parent = this;
    static_uni->parent = this;
    egress_static_uni->parent = this;

    yang_name = "transport-tunnel-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::~TransportTunnelInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<homepath_ero.len(); index++)
    {
        if(homepath_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<diversity_info.len(); index++)
    {
        if(diversity_info[index]->has_data())
            return true;
    }
    return status_homepath_working.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data())
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<homepath_ero.len(); index++)
    {
        if(homepath_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<diversity_info.len(); index++)
    {
        if(diversity_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(status_homepath_working.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation())
	|| (egress_static_uni !=  nullptr && egress_static_uni->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status_homepath_working.is_set || is_set(status_homepath_working.yfilter)) leaf_name_data.push_back(status_homepath_working.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni>();
        }
        return static_uni;
    }

    if(child_yang_name == "egress-static-uni")
    {
        if(egress_static_uni == nullptr)
        {
            egress_static_uni = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni>();
        }
        return egress_static_uni;
    }

    if(child_yang_name == "homepath-ero")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro>();
        ent_->parent = this;
        homepath_ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "diversity-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo>();
        ent_->parent = this;
        diversity_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otn != nullptr)
    {
        _children["otn"] = otn;
    }

    if(static_uni != nullptr)
    {
        _children["static-uni"] = static_uni;
    }

    if(egress_static_uni != nullptr)
    {
        _children["egress-static-uni"] = egress_static_uni;
    }

    count_ = 0;
    for (auto ent_ : homepath_ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : diversity_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working = value;
        status_homepath_working.value_namespace = name_space;
        status_homepath_working.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status-homepath-working")
    {
        status_homepath_working.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "static-uni" || name == "egress-static-uni" || name == "homepath-ero" || name == "diversity-info" || name == "status-homepath-working")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::Otn()
    :
    config_bit_rate{YType::uint32, "config-bit-rate"}
        ,
    bandwidth_cfg(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg>())
{
    bandwidth_cfg->parent = this;

    yang_name = "otn"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::~Otn()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return config_bit_rate.is_set
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_bit_rate.yfilter)
	|| (bandwidth_cfg !=  nullptr && bandwidth_cfg->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_bit_rate.is_set || is_set(config_bit_rate.yfilter)) leaf_name_data.push_back(config_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-cfg")
    {
        if(bandwidth_cfg == nullptr)
        {
            bandwidth_cfg = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg>();
        }
        return bandwidth_cfg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_cfg != nullptr)
    {
        _children["bandwidth-cfg"] = bandwidth_cfg;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate = value;
        config_bit_rate.value_namespace = name_space;
        config_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-bit-rate")
    {
        config_bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-cfg" || name == "config-bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::BandwidthCfg()
    :
    odu_level{YType::enumeration, "odu-level"}
        ,
    odu_flex_cbr(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>())
    , odu_flex_gfp_f_res(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>())
    , odu_flex_gfp_f_non_res(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>())
{
    odu_flex_cbr->parent = this;
    odu_flex_gfp_f_res->parent = this;
    odu_flex_gfp_f_non_res->parent = this;

    yang_name = "bandwidth-cfg"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::~BandwidthCfg()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::has_data() const
{
    if (is_presence_container) return true;
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_level.yfilter)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.yfilter)) leaf_name_data.push_back(odu_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_flex_cbr != nullptr)
    {
        _children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        _children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        _children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
        odu_level.value_namespace = name_space;
        odu_level.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-level")
    {
        odu_level.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-flex-cbr" || name == "odu-flex-gfp-f-res" || name == "odu-flex-gfp-f-non-res" || name == "odu-level")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{

    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(tolerance.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.yfilter)) leaf_name_data.push_back(tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
        tolerance.value_namespace = name_space;
        tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "tolerance")
    {
        tolerance.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "tolerance")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth-cfg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_data() const
{
    if (is_presence_container) return true;
    return bit_rate.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::StaticUni()
    :
    client_port{YType::str, "client-port"},
    client_if_handle{YType::str, "client-if-handle"},
    client_odu_name{YType::str, "client-odu-name"},
    client_odu_if_handle{YType::str, "client-odu-if-handle"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    uptime{YType::uint32, "uptime"},
    local_termination{YType::enumeration, "local-termination"},
    static_uni_type{YType::enumeration, "static-uni-type"},
    term_client_port{YType::str, "term-client-port"},
    term_client_if_handle{YType::str, "term-client-if-handle"}
        ,
    term_interface_srlg(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg>())
{
    term_interface_srlg->parent = this;

    yang_name = "static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::~StaticUni()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_data() const
{
    if (is_presence_container) return true;
    return client_port.is_set
	|| client_if_handle.is_set
	|| client_odu_name.is_set
	|| client_odu_if_handle.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| uptime.is_set
	|| local_termination.is_set
	|| static_uni_type.is_set
	|| term_client_port.is_set
	|| term_client_if_handle.is_set
	|| (term_interface_srlg !=  nullptr && term_interface_srlg->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(client_if_handle.yfilter)
	|| ydk::is_set(client_odu_name.yfilter)
	|| ydk::is_set(client_odu_if_handle.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(static_uni_type.yfilter)
	|| ydk::is_set(term_client_port.yfilter)
	|| ydk::is_set(term_client_if_handle.yfilter)
	|| (term_interface_srlg !=  nullptr && term_interface_srlg->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (client_if_handle.is_set || is_set(client_if_handle.yfilter)) leaf_name_data.push_back(client_if_handle.get_name_leafdata());
    if (client_odu_name.is_set || is_set(client_odu_name.yfilter)) leaf_name_data.push_back(client_odu_name.get_name_leafdata());
    if (client_odu_if_handle.is_set || is_set(client_odu_if_handle.yfilter)) leaf_name_data.push_back(client_odu_if_handle.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (static_uni_type.is_set || is_set(static_uni_type.yfilter)) leaf_name_data.push_back(static_uni_type.get_name_leafdata());
    if (term_client_port.is_set || is_set(term_client_port.yfilter)) leaf_name_data.push_back(term_client_port.get_name_leafdata());
    if (term_client_if_handle.is_set || is_set(term_client_if_handle.yfilter)) leaf_name_data.push_back(term_client_if_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "term-interface-srlg")
    {
        if(term_interface_srlg == nullptr)
        {
            term_interface_srlg = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg>();
        }
        return term_interface_srlg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(term_interface_srlg != nullptr)
    {
        _children["term-interface-srlg"] = term_interface_srlg;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle = value;
        client_if_handle.value_namespace = name_space;
        client_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name = value;
        client_odu_name.value_namespace = name_space;
        client_odu_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle = value;
        client_odu_if_handle.value_namespace = name_space;
        client_odu_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type = value;
        static_uni_type.value_namespace = name_space;
        static_uni_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-port")
    {
        term_client_port = value;
        term_client_port.value_namespace = name_space;
        term_client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle = value;
        term_client_if_handle.value_namespace = name_space;
        term_client_if_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "client-if-handle")
    {
        client_if_handle.yfilter = yfilter;
    }
    if(value_path == "client-odu-name")
    {
        client_odu_name.yfilter = yfilter;
    }
    if(value_path == "client-odu-if-handle")
    {
        client_odu_if_handle.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "static-uni-type")
    {
        static_uni_type.yfilter = yfilter;
    }
    if(value_path == "term-client-port")
    {
        term_client_port.yfilter = yfilter;
    }
    if(value_path == "term-client-if-handle")
    {
        term_client_if_handle.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "term-interface-srlg" || name == "client-port" || name == "client-if-handle" || name == "client-odu-name" || name == "client-odu-if-handle" || name == "cross-connect-id" || name == "is-connected" || name == "uptime" || name == "local-termination" || name == "static-uni-type" || name == "term-client-port" || name == "term-client-if-handle")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::TermInterfaceSrlg()
    :
    discovered_srlg(this, {})
{

    yang_name = "term-interface-srlg"; yang_parent_name = "static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::~TermInterfaceSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_operation() const
{
    for (std::size_t index=0; index<discovered_srlg.len(); index++)
    {
        if(discovered_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-interface-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-srlg")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg>();
        ent_->parent = this;
        discovered_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovered_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "term-interface-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::StaticUni::TermInterfaceSrlg::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressStaticUni()
    :
    local_termination{YType::enumeration, "local-termination"},
    remote_uni_type{YType::enumeration, "remote-uni-type"}
        ,
    egress_port(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort>())
    , term_egress_port(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort>())
{
    egress_port->parent = this;
    term_egress_port->parent = this;

    yang_name = "egress-static-uni"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::~EgressStaticUni()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_data() const
{
    if (is_presence_container) return true;
    return local_termination.is_set
	|| remote_uni_type.is_set
	|| (egress_port !=  nullptr && egress_port->has_data())
	|| (term_egress_port !=  nullptr && term_egress_port->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_termination.yfilter)
	|| ydk::is_set(remote_uni_type.yfilter)
	|| (egress_port !=  nullptr && egress_port->has_operation())
	|| (term_egress_port !=  nullptr && term_egress_port->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_termination.is_set || is_set(local_termination.yfilter)) leaf_name_data.push_back(local_termination.get_name_leafdata());
    if (remote_uni_type.is_set || is_set(remote_uni_type.yfilter)) leaf_name_data.push_back(remote_uni_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-port")
    {
        if(egress_port == nullptr)
        {
            egress_port = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort>();
        }
        return egress_port;
    }

    if(child_yang_name == "term-egress-port")
    {
        if(term_egress_port == nullptr)
        {
            term_egress_port = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort>();
        }
        return term_egress_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_port != nullptr)
    {
        _children["egress-port"] = egress_port;
    }

    if(term_egress_port != nullptr)
    {
        _children["term-egress-port"] = term_egress_port;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-termination")
    {
        local_termination = value;
        local_termination.value_namespace = name_space;
        local_termination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type = value;
        remote_uni_type.value_namespace = name_space;
        remote_uni_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-termination")
    {
        local_termination.yfilter = yfilter;
    }
    if(value_path == "remote-uni-type")
    {
        remote_uni_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-port" || name == "term-egress-port" || name == "local-termination" || name == "remote-uni-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::EgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::~EgressPort()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_addr != nullptr)
    {
        _children["te-addr"] = te_addr;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "egress-port"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        _children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TermEgressPort()
    :
    te_addr(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "term-egress-port"; yang_parent_name = "egress-static-uni"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::~TermEgressPort()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term-egress-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_addr != nullptr)
    {
        _children["te-addr"] = te_addr;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "term-egress-port"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::~TeAddr()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        _children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::HomepathEro()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "homepath-ero"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::~HomepathEro()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_data() const
{
    if (is_presence_container) return true;
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "homepath-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "homepath-ero"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::DiversityInfo()
    :
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "diversity-info"; yang_parent_name = "transport-tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::~DiversityInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::BfdInfo()
    :
    bfd_session_up{YType::boolean, "bfd-session-up"},
    session_up_time{YType::uint32, "session-up-time"},
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    minimum_session_up_interval{YType::uint32, "minimum-session-up-interval"},
    maximum_session_up_interval{YType::uint32, "maximum-session-up-interval"}
        ,
    event_counters(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>())
    , dampening_info(this, {})
{
    event_counters->parent = this;

    yang_name = "bfd-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::~BfdInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dampening_info.len(); index++)
    {
        if(dampening_info[index]->has_data())
            return true;
    }
    return bfd_session_up.is_set
	|| session_up_time.is_set
	|| failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| minimum_session_up_interval.is_set
	|| maximum_session_up_interval.is_set
	|| (event_counters !=  nullptr && event_counters->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::has_operation() const
{
    for (std::size_t index=0; index<dampening_info.len(); index++)
    {
        if(dampening_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_up.yfilter)
	|| ydk::is_set(session_up_time.yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(minimum_session_up_interval.yfilter)
	|| ydk::is_set(maximum_session_up_interval.yfilter)
	|| (event_counters !=  nullptr && event_counters->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_up.is_set || is_set(bfd_session_up.yfilter)) leaf_name_data.push_back(bfd_session_up.get_name_leafdata());
    if (session_up_time.is_set || is_set(session_up_time.yfilter)) leaf_name_data.push_back(session_up_time.get_name_leafdata());
    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (minimum_session_up_interval.is_set || is_set(minimum_session_up_interval.yfilter)) leaf_name_data.push_back(minimum_session_up_interval.get_name_leafdata());
    if (maximum_session_up_interval.is_set || is_set(maximum_session_up_interval.yfilter)) leaf_name_data.push_back(maximum_session_up_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-counters")
    {
        if(event_counters == nullptr)
        {
            event_counters = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters>();
        }
        return event_counters;
    }

    if(child_yang_name == "dampening-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo>();
        ent_->parent = this;
        dampening_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_counters != nullptr)
    {
        _children["event-counters"] = event_counters;
    }

    count_ = 0;
    for (auto ent_ : dampening_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up = value;
        bfd_session_up.value_namespace = name_space;
        bfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-time")
    {
        session_up_time = value;
        session_up_time.value_namespace = name_space;
        session_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval = value;
        minimum_session_up_interval.value_namespace = name_space;
        minimum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval = value;
        maximum_session_up_interval.value_namespace = name_space;
        maximum_session_up_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-up")
    {
        bfd_session_up.yfilter = yfilter;
    }
    if(value_path == "session-up-time")
    {
        session_up_time.yfilter = yfilter;
    }
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "minimum-session-up-interval")
    {
        minimum_session_up_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-session-up-interval")
    {
        maximum_session_up_interval.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-counters" || name == "dampening-info" || name == "bfd-session-up" || name == "session-up-time" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "minimum-session-up-interval" || name == "maximum-session-up-interval")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::EventCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "event-counters"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::~EventCounters()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_data() const
{
    if (is_presence_container) return true;
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::DampeningInfo()
    :
    option_index{YType::uint32, "option-index"},
    hold_down_time{YType::uint32, "hold-down-time"},
    remained_time{YType::uint32, "remained-time"},
    backoff_count{YType::uint32, "backoff-count"}
{

    yang_name = "dampening-info"; yang_parent_name = "bfd-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::~DampeningInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_data() const
{
    if (is_presence_container) return true;
    return option_index.is_set
	|| hold_down_time.is_set
	|| remained_time.is_set
	|| backoff_count.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(hold_down_time.yfilter)
	|| ydk::is_set(remained_time.yfilter)
	|| ydk::is_set(backoff_count.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (hold_down_time.is_set || is_set(hold_down_time.yfilter)) leaf_name_data.push_back(hold_down_time.get_name_leafdata());
    if (remained_time.is_set || is_set(remained_time.yfilter)) leaf_name_data.push_back(remained_time.get_name_leafdata());
    if (backoff_count.is_set || is_set(backoff_count.yfilter)) leaf_name_data.push_back(backoff_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time = value;
        hold_down_time.value_namespace = name_space;
        hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remained-time")
    {
        remained_time = value;
        remained_time.value_namespace = name_space;
        remained_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backoff-count")
    {
        backoff_count = value;
        backoff_count.value_namespace = name_space;
        backoff_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "hold-down-time")
    {
        hold_down_time.yfilter = yfilter;
    }
    if(value_path == "remained-time")
    {
        remained_time.yfilter = yfilter;
    }
    if(value_path == "backoff-count")
    {
        backoff_count.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-index" || name == "hold-down-time" || name == "remained-time" || name == "backoff-count")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::OtnBidir()
    :
    aps(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps>())
    , restoration(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration>())
{
    aps->parent = this;
    restoration->parent = this;

    yang_name = "otn-bidir"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::~OtnBidir()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::has_data() const
{
    if (is_presence_container) return true;
    return (aps !=  nullptr && aps->has_data())
	|| (restoration !=  nullptr && restoration->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::has_operation() const
{
    return is_set(yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (restoration !=  nullptr && restoration->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "restoration")
    {
        if(restoration == nullptr)
        {
            restoration = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration>();
        }
        return restoration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aps != nullptr)
    {
        _children["aps"] = aps;
    }

    if(restoration != nullptr)
    {
        _children["restoration"] = restoration;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "restoration")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::Aps()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
        ,
    protection_profile(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile>())
{
    protection_profile->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::~Aps()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp.is_set
	|| diversity_type.is_set
	|| (protection_profile !=  nullptr && protection_profile->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter)
	|| (protection_profile !=  nullptr && protection_profile->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-profile")
    {
        if(protection_profile == nullptr)
        {
            protection_profile = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile>();
        }
        return protection_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection_profile != nullptr)
    {
        _children["protection-profile"] = protection_profile;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-profile" || name == "active-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::ProtectionProfile()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "protection-profile"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::~ProtectionProfile()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(revert_schedule != nullptr)
    {
        _children["revert-schedule"] = revert_schedule;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "protection-profile"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Aps::ProtectionProfile::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::Restoration()
    :
    revert_option{YType::enumeration, "revert-option"},
    diverse_lsp{YType::enumeration, "diverse-lsp"},
    diversity_type{YType::enumeration, "diversity-type"}
{

    yang_name = "restoration"; yang_parent_name = "otn-bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::~Restoration()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_data() const
{
    if (is_presence_container) return true;
    return revert_option.is_set
	|| diverse_lsp.is_set
	|| diversity_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(revert_option.yfilter)
	|| ydk::is_set(diverse_lsp.yfilter)
	|| ydk::is_set(diversity_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restoration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (revert_option.is_set || is_set(revert_option.yfilter)) leaf_name_data.push_back(revert_option.get_name_leafdata());
    if (diverse_lsp.is_set || is_set(diverse_lsp.yfilter)) leaf_name_data.push_back(diverse_lsp.get_name_leafdata());
    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "revert-option")
    {
        revert_option = value;
        revert_option.value_namespace = name_space;
        revert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp = value;
        diverse_lsp.value_namespace = name_space;
        diverse_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "revert-option")
    {
        revert_option.yfilter = yfilter;
    }
    if(value_path == "diverse-lsp")
    {
        diverse_lsp.yfilter = yfilter;
    }
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::OtnBidir::Restoration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-option" || name == "diverse-lsp" || name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::Bidir()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"},
    reverse_bandwidth_standby{YType::uint32, "reverse-bandwidth-standby"}
        ,
    reverse_ero_error_current(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent>())
    , reverse_ero_error_reopt(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt>())
    , reverse_ero_error_standby(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby>())
    , reverse_ero_error_standby_reopt(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt>())
{
    reverse_ero_error_current->parent = this;
    reverse_ero_error_reopt->parent = this;
    reverse_ero_error_standby->parent = this;
    reverse_ero_error_standby_reopt->parent = this;

    yang_name = "bidir"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::~Bidir()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::has_data() const
{
    if (is_presence_container) return true;
    return reverse_bandwidth.is_set
	|| reverse_bandwidth_standby.is_set
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_data())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_data())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_data())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_bandwidth.yfilter)
	|| ydk::is_set(reverse_bandwidth_standby.yfilter)
	|| (reverse_ero_error_current !=  nullptr && reverse_ero_error_current->has_operation())
	|| (reverse_ero_error_reopt !=  nullptr && reverse_ero_error_reopt->has_operation())
	|| (reverse_ero_error_standby !=  nullptr && reverse_ero_error_standby->has_operation())
	|| (reverse_ero_error_standby_reopt !=  nullptr && reverse_ero_error_standby_reopt->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.yfilter)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());
    if (reverse_bandwidth_standby.is_set || is_set(reverse_bandwidth_standby.yfilter)) leaf_name_data.push_back(reverse_bandwidth_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-ero-error-current")
    {
        if(reverse_ero_error_current == nullptr)
        {
            reverse_ero_error_current = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent>();
        }
        return reverse_ero_error_current;
    }

    if(child_yang_name == "reverse-ero-error-reopt")
    {
        if(reverse_ero_error_reopt == nullptr)
        {
            reverse_ero_error_reopt = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt>();
        }
        return reverse_ero_error_reopt;
    }

    if(child_yang_name == "reverse-ero-error-standby")
    {
        if(reverse_ero_error_standby == nullptr)
        {
            reverse_ero_error_standby = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby>();
        }
        return reverse_ero_error_standby;
    }

    if(child_yang_name == "reverse-ero-error-standby-reopt")
    {
        if(reverse_ero_error_standby_reopt == nullptr)
        {
            reverse_ero_error_standby_reopt = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt>();
        }
        return reverse_ero_error_standby_reopt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_ero_error_current != nullptr)
    {
        _children["reverse-ero-error-current"] = reverse_ero_error_current;
    }

    if(reverse_ero_error_reopt != nullptr)
    {
        _children["reverse-ero-error-reopt"] = reverse_ero_error_reopt;
    }

    if(reverse_ero_error_standby != nullptr)
    {
        _children["reverse-ero-error-standby"] = reverse_ero_error_standby;
    }

    if(reverse_ero_error_standby_reopt != nullptr)
    {
        _children["reverse-ero-error-standby-reopt"] = reverse_ero_error_standby_reopt;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
        reverse_bandwidth.value_namespace = name_space;
        reverse_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby = value;
        reverse_bandwidth_standby.value_namespace = name_space;
        reverse_bandwidth_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-bandwidth-standby")
    {
        reverse_bandwidth_standby.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-ero-error-current" || name == "reverse-ero-error-reopt" || name == "reverse-ero-error-standby" || name == "reverse-ero-error-standby-reopt" || name == "reverse-bandwidth" || name == "reverse-bandwidth-standby")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::ReverseEroErrorCurrent()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
        ,
    path_calculation_error(this, {})
{

    yang_name = "reverse-ero-error-current"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::~ReverseEroErrorCurrent()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-current"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::ReverseEroErrorReopt()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
        ,
    path_calculation_error(this, {})
{

    yang_name = "reverse-ero-error-reopt"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::~ReverseEroErrorReopt()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-reopt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-reopt"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::ReverseEroErrorStandby()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
        ,
    path_calculation_error(this, {})
{

    yang_name = "reverse-ero-error-standby"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::~ReverseEroErrorStandby()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::ReverseEroErrorStandbyReopt()
    :
    reverse_lsp_id{YType::uint16, "reverse-lsp-id"},
    path_reject_reason_bw{YType::boolean, "path-reject-reason-bw"},
    path_reject_reason_affinity{YType::boolean, "path-reject-reason-affinity"},
    path_reject_reason_ip_addr{YType::boolean, "path-reject-reason-ip-addr"},
    path_reject_reason_reverse_link{YType::boolean, "path-reject-reason-reverse-link"},
    path_reject_reason_ixcd{YType::boolean, "path-reject-reason-ixcd"},
    path_reject_reason_holddown{YType::boolean, "path-reject-reason-holddown"},
    path_reject_reason_exclude_node{YType::boolean, "path-reject-reason-exclude-node"},
    path_reject_reason_exclude_link{YType::boolean, "path-reject-reason-exclude-link"},
    path_reject_reason_exclude_srlg{YType::boolean, "path-reject-reason-exclude-srlg"},
    path_reject_reason_hop_limit{YType::boolean, "path-reject-reason-hop-limit"},
    path_reject_reason_node_ol_unknown{YType::boolean, "path-reject-reason-node-ol-unknown"},
    path_reject_reason_node_ol_head{YType::boolean, "path-reject-reason-node-ol-head"},
    path_reject_reason_node_ol_mid{YType::boolean, "path-reject-reason-node-ol-mid"},
    path_reject_reason_node_ol_tail{YType::boolean, "path-reject-reason-node-ol-tail"},
    path_reject_reason_reverse_bw{YType::boolean, "path-reject-reason-reverse-bw"},
    path_reject_reason_node_unreachable{YType::boolean, "path-reject-reason-node-unreachable"},
    path_option_index{YType::uint16, "path-option-index"},
    path_option_type{YType::enumeration, "path-option-type"},
    ero_reject_reason{YType::enumeration, "ero-reject-reason"}
        ,
    path_calculation_error(this, {})
{

    yang_name = "reverse-ero-error-standby-reopt"; yang_parent_name = "bidir"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::~ReverseEroErrorStandbyReopt()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    return reverse_lsp_id.is_set
	|| path_reject_reason_bw.is_set
	|| path_reject_reason_affinity.is_set
	|| path_reject_reason_ip_addr.is_set
	|| path_reject_reason_reverse_link.is_set
	|| path_reject_reason_ixcd.is_set
	|| path_reject_reason_holddown.is_set
	|| path_reject_reason_exclude_node.is_set
	|| path_reject_reason_exclude_link.is_set
	|| path_reject_reason_exclude_srlg.is_set
	|| path_reject_reason_hop_limit.is_set
	|| path_reject_reason_node_ol_unknown.is_set
	|| path_reject_reason_node_ol_head.is_set
	|| path_reject_reason_node_ol_mid.is_set
	|| path_reject_reason_node_ol_tail.is_set
	|| path_reject_reason_reverse_bw.is_set
	|| path_reject_reason_node_unreachable.is_set
	|| path_option_index.is_set
	|| path_option_type.is_set
	|| ero_reject_reason.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reverse_lsp_id.yfilter)
	|| ydk::is_set(path_reject_reason_bw.yfilter)
	|| ydk::is_set(path_reject_reason_affinity.yfilter)
	|| ydk::is_set(path_reject_reason_ip_addr.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_link.yfilter)
	|| ydk::is_set(path_reject_reason_ixcd.yfilter)
	|| ydk::is_set(path_reject_reason_holddown.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_node.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_link.yfilter)
	|| ydk::is_set(path_reject_reason_exclude_srlg.yfilter)
	|| ydk::is_set(path_reject_reason_hop_limit.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_unknown.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_head.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_mid.yfilter)
	|| ydk::is_set(path_reject_reason_node_ol_tail.yfilter)
	|| ydk::is_set(path_reject_reason_reverse_bw.yfilter)
	|| ydk::is_set(path_reject_reason_node_unreachable.yfilter)
	|| ydk::is_set(path_option_index.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(ero_reject_reason.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-error-standby-reopt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_lsp_id.is_set || is_set(reverse_lsp_id.yfilter)) leaf_name_data.push_back(reverse_lsp_id.get_name_leafdata());
    if (path_reject_reason_bw.is_set || is_set(path_reject_reason_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_bw.get_name_leafdata());
    if (path_reject_reason_affinity.is_set || is_set(path_reject_reason_affinity.yfilter)) leaf_name_data.push_back(path_reject_reason_affinity.get_name_leafdata());
    if (path_reject_reason_ip_addr.is_set || is_set(path_reject_reason_ip_addr.yfilter)) leaf_name_data.push_back(path_reject_reason_ip_addr.get_name_leafdata());
    if (path_reject_reason_reverse_link.is_set || is_set(path_reject_reason_reverse_link.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_link.get_name_leafdata());
    if (path_reject_reason_ixcd.is_set || is_set(path_reject_reason_ixcd.yfilter)) leaf_name_data.push_back(path_reject_reason_ixcd.get_name_leafdata());
    if (path_reject_reason_holddown.is_set || is_set(path_reject_reason_holddown.yfilter)) leaf_name_data.push_back(path_reject_reason_holddown.get_name_leafdata());
    if (path_reject_reason_exclude_node.is_set || is_set(path_reject_reason_exclude_node.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_node.get_name_leafdata());
    if (path_reject_reason_exclude_link.is_set || is_set(path_reject_reason_exclude_link.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_link.get_name_leafdata());
    if (path_reject_reason_exclude_srlg.is_set || is_set(path_reject_reason_exclude_srlg.yfilter)) leaf_name_data.push_back(path_reject_reason_exclude_srlg.get_name_leafdata());
    if (path_reject_reason_hop_limit.is_set || is_set(path_reject_reason_hop_limit.yfilter)) leaf_name_data.push_back(path_reject_reason_hop_limit.get_name_leafdata());
    if (path_reject_reason_node_ol_unknown.is_set || is_set(path_reject_reason_node_ol_unknown.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_unknown.get_name_leafdata());
    if (path_reject_reason_node_ol_head.is_set || is_set(path_reject_reason_node_ol_head.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_head.get_name_leafdata());
    if (path_reject_reason_node_ol_mid.is_set || is_set(path_reject_reason_node_ol_mid.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_mid.get_name_leafdata());
    if (path_reject_reason_node_ol_tail.is_set || is_set(path_reject_reason_node_ol_tail.yfilter)) leaf_name_data.push_back(path_reject_reason_node_ol_tail.get_name_leafdata());
    if (path_reject_reason_reverse_bw.is_set || is_set(path_reject_reason_reverse_bw.yfilter)) leaf_name_data.push_back(path_reject_reason_reverse_bw.get_name_leafdata());
    if (path_reject_reason_node_unreachable.is_set || is_set(path_reject_reason_node_unreachable.yfilter)) leaf_name_data.push_back(path_reject_reason_node_unreachable.get_name_leafdata());
    if (path_option_index.is_set || is_set(path_option_index.yfilter)) leaf_name_data.push_back(path_option_index.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (ero_reject_reason.is_set || is_set(ero_reject_reason.yfilter)) leaf_name_data.push_back(ero_reject_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id = value;
        reverse_lsp_id.value_namespace = name_space;
        reverse_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw = value;
        path_reject_reason_bw.value_namespace = name_space;
        path_reject_reason_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity = value;
        path_reject_reason_affinity.value_namespace = name_space;
        path_reject_reason_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr = value;
        path_reject_reason_ip_addr.value_namespace = name_space;
        path_reject_reason_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link = value;
        path_reject_reason_reverse_link.value_namespace = name_space;
        path_reject_reason_reverse_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd = value;
        path_reject_reason_ixcd.value_namespace = name_space;
        path_reject_reason_ixcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown = value;
        path_reject_reason_holddown.value_namespace = name_space;
        path_reject_reason_holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node = value;
        path_reject_reason_exclude_node.value_namespace = name_space;
        path_reject_reason_exclude_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link = value;
        path_reject_reason_exclude_link.value_namespace = name_space;
        path_reject_reason_exclude_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg = value;
        path_reject_reason_exclude_srlg.value_namespace = name_space;
        path_reject_reason_exclude_srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit = value;
        path_reject_reason_hop_limit.value_namespace = name_space;
        path_reject_reason_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown = value;
        path_reject_reason_node_ol_unknown.value_namespace = name_space;
        path_reject_reason_node_ol_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head = value;
        path_reject_reason_node_ol_head.value_namespace = name_space;
        path_reject_reason_node_ol_head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid = value;
        path_reject_reason_node_ol_mid.value_namespace = name_space;
        path_reject_reason_node_ol_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail = value;
        path_reject_reason_node_ol_tail.value_namespace = name_space;
        path_reject_reason_node_ol_tail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw = value;
        path_reject_reason_reverse_bw.value_namespace = name_space;
        path_reject_reason_reverse_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable = value;
        path_reject_reason_node_unreachable.value_namespace = name_space;
        path_reject_reason_node_unreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-index")
    {
        path_option_index = value;
        path_option_index.value_namespace = name_space;
        path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason = value;
        ero_reject_reason.value_namespace = name_space;
        ero_reject_reason.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-lsp-id")
    {
        reverse_lsp_id.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-bw")
    {
        path_reject_reason_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-affinity")
    {
        path_reject_reason_affinity.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ip-addr")
    {
        path_reject_reason_ip_addr.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-link")
    {
        path_reject_reason_reverse_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-ixcd")
    {
        path_reject_reason_ixcd.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-holddown")
    {
        path_reject_reason_holddown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-node")
    {
        path_reject_reason_exclude_node.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-link")
    {
        path_reject_reason_exclude_link.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-exclude-srlg")
    {
        path_reject_reason_exclude_srlg.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-hop-limit")
    {
        path_reject_reason_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-unknown")
    {
        path_reject_reason_node_ol_unknown.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-head")
    {
        path_reject_reason_node_ol_head.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-mid")
    {
        path_reject_reason_node_ol_mid.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-ol-tail")
    {
        path_reject_reason_node_ol_tail.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-reverse-bw")
    {
        path_reject_reason_reverse_bw.yfilter = yfilter;
    }
    if(value_path == "path-reject-reason-node-unreachable")
    {
        path_reject_reason_node_unreachable.yfilter = yfilter;
    }
    if(value_path == "path-option-index")
    {
        path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "ero-reject-reason")
    {
        ero_reject_reason.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-calculation-error" || name == "reverse-lsp-id" || name == "path-reject-reason-bw" || name == "path-reject-reason-affinity" || name == "path-reject-reason-ip-addr" || name == "path-reject-reason-reverse-link" || name == "path-reject-reason-ixcd" || name == "path-reject-reason-holddown" || name == "path-reject-reason-exclude-node" || name == "path-reject-reason-exclude-link" || name == "path-reject-reason-exclude-srlg" || name == "path-reject-reason-hop-limit" || name == "path-reject-reason-node-ol-unknown" || name == "path-reject-reason-node-ol-head" || name == "path-reject-reason-node-ol-mid" || name == "path-reject-reason-node-ol-tail" || name == "path-reject-reason-reverse-bw" || name == "path-reject-reason-node-unreachable" || name == "path-option-index" || name == "path-option-type" || name == "ero-reject-reason")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "reverse-ero-error-standby-reopt"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "xro-attribute-set"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_union != nullptr)
    {
        _children["attribute-set-union"] = attribute_set_union;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_path_option != nullptr)
    {
        _children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        _children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        _children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        _children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        _children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        _children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        _children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "version-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        ent_->parent = this;
        version_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        _children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : version_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
        ,
    signalled_name(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
    , affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
    , logging(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
    , policy_class_entry(this, {})
    , tunnel_id(this, {})
    , protected_interface(this, {})
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protected-interface")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        ent_->parent = this;
        protected_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signalled_name != nullptr)
    {
        _children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : protected_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return protected_interface.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_forward_class_configured{YType::boolean, "is-forward-class-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
        ,
    affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
    , logging(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
    , policy_class_entry(this, {})
    , mesh_group_id(this, {})
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_forward_class_configured.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_forward_class_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_forward_class_configured.is_set || is_set(is_forward_class_configured.yfilter)) leaf_name_data.push_back(is_forward_class_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mesh-group-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        ent_->parent = this;
        mesh_group_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mesh_group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured = value;
        is_forward_class_configured.value_namespace = name_space;
        is_forward_class_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-forward-class-configured" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    if (is_presence_container) return true;
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xro != nullptr)
    {
        _children["xro"] = xro;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
        ,
    xro_subobject(this, {})
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        ent_->parent = this;
        xro_subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xro_subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
        ,
    ipv4_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
    , ipv6_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
    , unnumbered_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
    , as_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
    , srlg_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
    , lsp_subobject(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_subobject != nullptr)
    {
        _children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        _children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        _children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        _children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        _children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        _children["lsp-subobject"] = lsp_subobject;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    if (is_presence_container) return true;
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    if (is_presence_container) return true;
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
        ,
    fec(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    if (is_presence_container) return true;
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec != nullptr)
    {
        _children["fec"] = fec;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::AttributeSetP2mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
        ,
    affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>())
    , tunnel_id(this, {})
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::~AttributeSetP2mpte()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(revert_schedule != nullptr)
    {
        _children["revert-schedule"] = revert_schedule;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::AttributeSetP2pTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
        ,
    affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>())
    , logging(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>())
    , prepend_list(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>())
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::~AttributeSetP2pTe()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        _children["prepend-list"] = prepend_list;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::~Logging()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependList()
    :
    prepend_entry(this, {})
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::~PrependList()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry>();
        ent_->parent = this;
        prepend_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prepend_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::TeTunnelConvergence()
    :
    is_convergence_in_progress{YType::boolean, "is-convergence-in-progress"},
    frr_trigger_time{YType::uint64, "frr-trigger-time"},
    pcalc_complete_time{YType::uint64, "pcalc-complete-time"},
    convergence_complete_time{YType::uint64, "convergence-complete-time"},
    binding_label_rewrite_time{YType::uint64, "binding-label-rewrite-time"},
    vif_creation_time{YType::uint64, "vif-creation-time"}
        ,
    convergence_lsp(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp>())
{
    convergence_lsp->parent = this;

    yang_name = "te-tunnel-convergence"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::~TeTunnelConvergence()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_data() const
{
    if (is_presence_container) return true;
    return is_convergence_in_progress.is_set
	|| frr_trigger_time.is_set
	|| pcalc_complete_time.is_set
	|| convergence_complete_time.is_set
	|| binding_label_rewrite_time.is_set
	|| vif_creation_time.is_set
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_convergence_in_progress.yfilter)
	|| ydk::is_set(frr_trigger_time.yfilter)
	|| ydk::is_set(pcalc_complete_time.yfilter)
	|| ydk::is_set(convergence_complete_time.yfilter)
	|| ydk::is_set(binding_label_rewrite_time.yfilter)
	|| ydk::is_set(vif_creation_time.yfilter)
	|| (convergence_lsp !=  nullptr && convergence_lsp->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_convergence_in_progress.is_set || is_set(is_convergence_in_progress.yfilter)) leaf_name_data.push_back(is_convergence_in_progress.get_name_leafdata());
    if (frr_trigger_time.is_set || is_set(frr_trigger_time.yfilter)) leaf_name_data.push_back(frr_trigger_time.get_name_leafdata());
    if (pcalc_complete_time.is_set || is_set(pcalc_complete_time.yfilter)) leaf_name_data.push_back(pcalc_complete_time.get_name_leafdata());
    if (convergence_complete_time.is_set || is_set(convergence_complete_time.yfilter)) leaf_name_data.push_back(convergence_complete_time.get_name_leafdata());
    if (binding_label_rewrite_time.is_set || is_set(binding_label_rewrite_time.yfilter)) leaf_name_data.push_back(binding_label_rewrite_time.get_name_leafdata());
    if (vif_creation_time.is_set || is_set(vif_creation_time.yfilter)) leaf_name_data.push_back(vif_creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-lsp")
    {
        if(convergence_lsp == nullptr)
        {
            convergence_lsp = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp>();
        }
        return convergence_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(convergence_lsp != nullptr)
    {
        _children["convergence-lsp"] = convergence_lsp;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress = value;
        is_convergence_in_progress.value_namespace = name_space;
        is_convergence_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time = value;
        frr_trigger_time.value_namespace = name_space;
        frr_trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time = value;
        pcalc_complete_time.value_namespace = name_space;
        pcalc_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time = value;
        convergence_complete_time.value_namespace = name_space;
        convergence_complete_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time = value;
        binding_label_rewrite_time.value_namespace = name_space;
        binding_label_rewrite_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time = value;
        vif_creation_time.value_namespace = name_space;
        vif_creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-convergence-in-progress")
    {
        is_convergence_in_progress.yfilter = yfilter;
    }
    if(value_path == "frr-trigger-time")
    {
        frr_trigger_time.yfilter = yfilter;
    }
    if(value_path == "pcalc-complete-time")
    {
        pcalc_complete_time.yfilter = yfilter;
    }
    if(value_path == "convergence-complete-time")
    {
        convergence_complete_time.yfilter = yfilter;
    }
    if(value_path == "binding-label-rewrite-time")
    {
        binding_label_rewrite_time.yfilter = yfilter;
    }
    if(value_path == "vif-creation-time")
    {
        vif_creation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-lsp" || name == "is-convergence-in-progress" || name == "frr-trigger-time" || name == "pcalc-complete-time" || name == "convergence-complete-time" || name == "binding-label-rewrite-time" || name == "vif-creation-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::ConvergenceLsp()
    :
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    label_rewrite{YType::uint64, "label-rewrite"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"},
    creation_time{YType::uint64, "creation-time"}
{

    yang_name = "convergence-lsp"; yang_parent_name = "te-tunnel-convergence"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::~ConvergenceLsp()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_data() const
{
    if (is_presence_container) return true;
    return path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| label_rewrite.is_set
	|| tunnel_rewrite.is_set
	|| creation_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_in.yfilter)
	|| ydk::is_set(path_out.yfilter)
	|| ydk::is_set(resv_in.yfilter)
	|| ydk::is_set(resv_out.yfilter)
	|| ydk::is_set(label_rewrite.yfilter)
	|| ydk::is_set(tunnel_rewrite.yfilter)
	|| ydk::is_set(creation_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_in.is_set || is_set(path_in.yfilter)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.yfilter)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.yfilter)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.yfilter)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.yfilter)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.yfilter)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-in")
    {
        path_in = value;
        path_in.value_namespace = name_space;
        path_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-out")
    {
        path_out = value;
        path_out.value_namespace = name_space;
        path_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-in")
    {
        resv_in = value;
        resv_in.value_namespace = name_space;
        resv_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-out")
    {
        resv_out = value;
        resv_out.value_namespace = name_space;
        resv_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
        label_rewrite.value_namespace = name_space;
        label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
        tunnel_rewrite.value_namespace = name_space;
        tunnel_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-in")
    {
        path_in.yfilter = yfilter;
    }
    if(value_path == "path-out")
    {
        path_out.yfilter = yfilter;
    }
    if(value_path == "resv-in")
    {
        resv_in.yfilter = yfilter;
    }
    if(value_path == "resv-out")
    {
        resv_out.yfilter = yfilter;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite.yfilter = yfilter;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence::ConvergenceLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-in" || name == "path-out" || name == "resv-in" || name == "resv-out" || name == "label-rewrite" || name == "tunnel-rewrite" || name == "creation-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::FlexInfo()
    :
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"},
    fault_in_label{YType::uint32, "fault-in-label"},
    is_lockout{YType::boolean, "is-lockout"},
    lockout_timestamp{YType::uint32, "lockout-timestamp"},
    lockout_lsp_id{YType::uint16, "lockout-lsp-id"},
    origination{YType::enumeration, "origination"}
{

    yang_name = "flex-info"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::~FlexInfo()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::has_data() const
{
    if (is_presence_container) return true;
    return fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| fault_in_label.is_set
	|| is_lockout.is_set
	|| lockout_timestamp.is_set
	|| lockout_lsp_id.is_set
	|| origination.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| ydk::is_set(fault_in_label.yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_timestamp.yfilter)
	|| ydk::is_set(lockout_lsp_id.yfilter)
	|| ydk::is_set(origination.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());
    if (fault_in_label.is_set || is_set(fault_in_label.yfilter)) leaf_name_data.push_back(fault_in_label.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_timestamp.is_set || is_set(lockout_timestamp.yfilter)) leaf_name_data.push_back(lockout_timestamp.get_name_leafdata());
    if (lockout_lsp_id.is_set || is_set(lockout_lsp_id.yfilter)) leaf_name_data.push_back(lockout_lsp_id.get_name_leafdata());
    if (origination.is_set || is_set(origination.yfilter)) leaf_name_data.push_back(origination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-in-label")
    {
        fault_in_label = value;
        fault_in_label.value_namespace = name_space;
        fault_in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-timestamp")
    {
        lockout_timestamp = value;
        lockout_timestamp.value_namespace = name_space;
        lockout_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-lsp-id")
    {
        lockout_lsp_id = value;
        lockout_lsp_id.value_namespace = name_space;
        lockout_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origination")
    {
        origination = value;
        origination.value_namespace = name_space;
        origination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
    if(value_path == "fault-in-label")
    {
        fault_in_label.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "lockout-timestamp")
    {
        lockout_timestamp.yfilter = yfilter;
    }
    if(value_path == "lockout-lsp-id")
    {
        lockout_lsp_id.yfilter = yfilter;
    }
    if(value_path == "origination")
    {
        origination.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time" || name == "fault-in-label" || name == "is-lockout" || name == "lockout-timestamp" || name == "lockout-lsp-id" || name == "origination")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    destination_state{YType::enumeration, "destination-state"},
    active_path_option_index{YType::uint32, "active-path-option-index"},
    path_option_exhausted{YType::boolean, "path-option-exhausted"},
    uptime{YType::uint32, "uptime"},
    path_change_time{YType::uint32, "path-change-time"},
    total_uptime{YType::uint32, "total-uptime"},
    s2l_exist{YType::boolean, "s2l-exist"},
    destination_deletion_cause{YType::enumeration, "destination-deletion-cause"},
    destination_deletion_sub_cause{YType::enumeration, "destination-deletion-sub-cause"},
    destination_deletion_timestamp{YType::uint32, "destination-deletion-timestamp"},
    is_inter_area{YType::boolean, "is-inter-area"}
        ,
    inter_area_reoptimization(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization>())
    , path_option_entry(this, {})
    , path_option(this, {})
{
    inter_area_reoptimization->parent = this;

    yang_name = "destination"; yang_parent_name = "nni-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::~Destination()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option_entry.len(); index++)
    {
        if(path_option_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_state.is_set
	|| active_path_option_index.is_set
	|| path_option_exhausted.is_set
	|| uptime.is_set
	|| path_change_time.is_set
	|| total_uptime.is_set
	|| s2l_exist.is_set
	|| destination_deletion_cause.is_set
	|| destination_deletion_sub_cause.is_set
	|| destination_deletion_timestamp.is_set
	|| is_inter_area.is_set
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::has_operation() const
{
    for (std::size_t index=0; index<path_option_entry.len(); index++)
    {
        if(path_option_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_state.yfilter)
	|| ydk::is_set(active_path_option_index.yfilter)
	|| ydk::is_set(path_option_exhausted.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(path_change_time.yfilter)
	|| ydk::is_set(total_uptime.yfilter)
	|| ydk::is_set(s2l_exist.yfilter)
	|| ydk::is_set(destination_deletion_cause.yfilter)
	|| ydk::is_set(destination_deletion_sub_cause.yfilter)
	|| ydk::is_set(destination_deletion_timestamp.yfilter)
	|| ydk::is_set(is_inter_area.yfilter)
	|| (inter_area_reoptimization !=  nullptr && inter_area_reoptimization->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_state.is_set || is_set(destination_state.yfilter)) leaf_name_data.push_back(destination_state.get_name_leafdata());
    if (active_path_option_index.is_set || is_set(active_path_option_index.yfilter)) leaf_name_data.push_back(active_path_option_index.get_name_leafdata());
    if (path_option_exhausted.is_set || is_set(path_option_exhausted.yfilter)) leaf_name_data.push_back(path_option_exhausted.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (path_change_time.is_set || is_set(path_change_time.yfilter)) leaf_name_data.push_back(path_change_time.get_name_leafdata());
    if (total_uptime.is_set || is_set(total_uptime.yfilter)) leaf_name_data.push_back(total_uptime.get_name_leafdata());
    if (s2l_exist.is_set || is_set(s2l_exist.yfilter)) leaf_name_data.push_back(s2l_exist.get_name_leafdata());
    if (destination_deletion_cause.is_set || is_set(destination_deletion_cause.yfilter)) leaf_name_data.push_back(destination_deletion_cause.get_name_leafdata());
    if (destination_deletion_sub_cause.is_set || is_set(destination_deletion_sub_cause.yfilter)) leaf_name_data.push_back(destination_deletion_sub_cause.get_name_leafdata());
    if (destination_deletion_timestamp.is_set || is_set(destination_deletion_timestamp.yfilter)) leaf_name_data.push_back(destination_deletion_timestamp.get_name_leafdata());
    if (is_inter_area.is_set || is_set(is_inter_area.yfilter)) leaf_name_data.push_back(is_inter_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inter-area-reoptimization")
    {
        if(inter_area_reoptimization == nullptr)
        {
            inter_area_reoptimization = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization>();
        }
        return inter_area_reoptimization;
    }

    if(child_yang_name == "path-option-entry")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry>();
        ent_->parent = this;
        path_option_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-option")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption>();
        ent_->parent = this;
        path_option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inter_area_reoptimization != nullptr)
    {
        _children["inter-area-reoptimization"] = inter_area_reoptimization;
    }

    count_ = 0;
    for (auto ent_ : path_option_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-state")
    {
        destination_state = value;
        destination_state.value_namespace = name_space;
        destination_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-path-option-index")
    {
        active_path_option_index = value;
        active_path_option_index.value_namespace = name_space;
        active_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-exhausted")
    {
        path_option_exhausted = value;
        path_option_exhausted.value_namespace = name_space;
        path_option_exhausted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-change-time")
    {
        path_change_time = value;
        path_change_time.value_namespace = name_space;
        path_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-uptime")
    {
        total_uptime = value;
        total_uptime.value_namespace = name_space;
        total_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-exist")
    {
        s2l_exist = value;
        s2l_exist.value_namespace = name_space;
        s2l_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-cause")
    {
        destination_deletion_cause = value;
        destination_deletion_cause.value_namespace = name_space;
        destination_deletion_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-sub-cause")
    {
        destination_deletion_sub_cause = value;
        destination_deletion_sub_cause.value_namespace = name_space;
        destination_deletion_sub_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-deletion-timestamp")
    {
        destination_deletion_timestamp = value;
        destination_deletion_timestamp.value_namespace = name_space;
        destination_deletion_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-inter-area")
    {
        is_inter_area = value;
        is_inter_area.value_namespace = name_space;
        is_inter_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-state")
    {
        destination_state.yfilter = yfilter;
    }
    if(value_path == "active-path-option-index")
    {
        active_path_option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-exhausted")
    {
        path_option_exhausted.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "path-change-time")
    {
        path_change_time.yfilter = yfilter;
    }
    if(value_path == "total-uptime")
    {
        total_uptime.yfilter = yfilter;
    }
    if(value_path == "s2l-exist")
    {
        s2l_exist.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-cause")
    {
        destination_deletion_cause.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-sub-cause")
    {
        destination_deletion_sub_cause.yfilter = yfilter;
    }
    if(value_path == "destination-deletion-timestamp")
    {
        destination_deletion_timestamp.yfilter = yfilter;
    }
    if(value_path == "is-inter-area")
    {
        is_inter_area.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inter-area-reoptimization" || name == "path-option-entry" || name == "path-option" || name == "destination-address" || name == "destination-state" || name == "active-path-option-index" || name == "path-option-exhausted" || name == "uptime" || name == "path-change-time" || name == "total-uptime" || name == "s2l-exist" || name == "destination-deletion-cause" || name == "destination-deletion-sub-cause" || name == "destination-deletion-timestamp" || name == "is-inter-area")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::InterAreaReoptimization()
    :
    sent_path_queries{YType::uint16, "sent-path-queries"},
    time_since_last_query_sent{YType::uint32, "time-since-last-query-sent"},
    received_preferred_path_errors{YType::uint16, "received-preferred-path-errors"},
    time_since_last_preferred_path_error{YType::uint32, "time-since-last-preferred-path-error"},
    received_preferred_tree_errors{YType::uint16, "received-preferred-tree-errors"},
    time_since_last_preferred_tree_error{YType::uint32, "time-since-last-preferred-tree-error"},
    preferred_path_error_node{YType::str, "preferred-path-error-node"},
    preferred_tree_error_node{YType::str, "preferred-tree-error-node"}
{

    yang_name = "inter-area-reoptimization"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::~InterAreaReoptimization()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_data() const
{
    if (is_presence_container) return true;
    return sent_path_queries.is_set
	|| time_since_last_query_sent.is_set
	|| received_preferred_path_errors.is_set
	|| time_since_last_preferred_path_error.is_set
	|| received_preferred_tree_errors.is_set
	|| time_since_last_preferred_tree_error.is_set
	|| preferred_path_error_node.is_set
	|| preferred_tree_error_node.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_path_queries.yfilter)
	|| ydk::is_set(time_since_last_query_sent.yfilter)
	|| ydk::is_set(received_preferred_path_errors.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_error.yfilter)
	|| ydk::is_set(received_preferred_tree_errors.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_error.yfilter)
	|| ydk::is_set(preferred_path_error_node.yfilter)
	|| ydk::is_set(preferred_tree_error_node.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-reoptimization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_path_queries.is_set || is_set(sent_path_queries.yfilter)) leaf_name_data.push_back(sent_path_queries.get_name_leafdata());
    if (time_since_last_query_sent.is_set || is_set(time_since_last_query_sent.yfilter)) leaf_name_data.push_back(time_since_last_query_sent.get_name_leafdata());
    if (received_preferred_path_errors.is_set || is_set(received_preferred_path_errors.yfilter)) leaf_name_data.push_back(received_preferred_path_errors.get_name_leafdata());
    if (time_since_last_preferred_path_error.is_set || is_set(time_since_last_preferred_path_error.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_error.get_name_leafdata());
    if (received_preferred_tree_errors.is_set || is_set(received_preferred_tree_errors.yfilter)) leaf_name_data.push_back(received_preferred_tree_errors.get_name_leafdata());
    if (time_since_last_preferred_tree_error.is_set || is_set(time_since_last_preferred_tree_error.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_error.get_name_leafdata());
    if (preferred_path_error_node.is_set || is_set(preferred_path_error_node.yfilter)) leaf_name_data.push_back(preferred_path_error_node.get_name_leafdata());
    if (preferred_tree_error_node.is_set || is_set(preferred_tree_error_node.yfilter)) leaf_name_data.push_back(preferred_tree_error_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-path-queries")
    {
        sent_path_queries = value;
        sent_path_queries.value_namespace = name_space;
        sent_path_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-sent")
    {
        time_since_last_query_sent = value;
        time_since_last_query_sent.value_namespace = name_space;
        time_since_last_query_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-preferred-path-errors")
    {
        received_preferred_path_errors = value;
        received_preferred_path_errors.value_namespace = name_space;
        received_preferred_path_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-error")
    {
        time_since_last_preferred_path_error = value;
        time_since_last_preferred_path_error.value_namespace = name_space;
        time_since_last_preferred_path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-preferred-tree-errors")
    {
        received_preferred_tree_errors = value;
        received_preferred_tree_errors.value_namespace = name_space;
        received_preferred_tree_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-error")
    {
        time_since_last_preferred_tree_error = value;
        time_since_last_preferred_tree_error.value_namespace = name_space;
        time_since_last_preferred_tree_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-error-node")
    {
        preferred_path_error_node = value;
        preferred_path_error_node.value_namespace = name_space;
        preferred_path_error_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-tree-error-node")
    {
        preferred_tree_error_node = value;
        preferred_tree_error_node.value_namespace = name_space;
        preferred_tree_error_node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-path-queries")
    {
        sent_path_queries.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-sent")
    {
        time_since_last_query_sent.yfilter = yfilter;
    }
    if(value_path == "received-preferred-path-errors")
    {
        received_preferred_path_errors.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-error")
    {
        time_since_last_preferred_path_error.yfilter = yfilter;
    }
    if(value_path == "received-preferred-tree-errors")
    {
        received_preferred_tree_errors.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-error")
    {
        time_since_last_preferred_tree_error.yfilter = yfilter;
    }
    if(value_path == "preferred-path-error-node")
    {
        preferred_path_error_node.yfilter = yfilter;
    }
    if(value_path == "preferred-tree-error-node")
    {
        preferred_tree_error_node.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::InterAreaReoptimization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-path-queries" || name == "time-since-last-query-sent" || name == "received-preferred-path-errors" || name == "time-since-last-preferred-path-error" || name == "received-preferred-tree-errors" || name == "time-since-last-preferred-tree-error" || name == "preferred-path-error-node" || name == "preferred-tree-error-node")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathOptionEntry()
    :
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    option_index{YType::uint32, "option-index"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    explicit_path_name{YType::str, "explicit-path-name"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    holddown_duration{YType::uint16, "holddown-duration"},
    pce_address{YType::str, "pce-address"},
    path_option_area_id{YType::str, "path-option-area-id"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_verbatim{YType::boolean, "is-verbatim"},
    is_disabled{YType::boolean, "is-disabled"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    attribute_set_found{YType::boolean, "attribute-set-found"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"}
        ,
    attribute_set(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet>())
    , xro_attribute_set(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet>())
    , path_calculation_error(this, {})
    , remerge_error(this, {})
    , signalling_error(this, {})
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "path-option-entry"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::~PathOptionEntry()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.len(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.len(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return option_index_is_valid.is_set
	|| option_index.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| explicit_path_name.is_set
	|| explicit_path_id.is_set
	|| holddown_duration.is_set
	|| pce_address.is_set
	|| path_option_area_id.is_set
	|| is_strict_explicit_path.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_verbatim.is_set
	|| is_disabled.is_set
	|| has_attribute_set.is_set
	|| attribute_set_found.is_set
	|| has_xro_attribute_set.is_set
	|| xro_attribute_set_found.is_set
	|| is_segment_routing.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.len(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.len(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.len(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_index_is_valid.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(path_option_name.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(explicit_path_id.yfilter)
	|| ydk::is_set(holddown_duration.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(path_option_area_id.yfilter)
	|| ydk::is_set(is_strict_explicit_path.yfilter)
	|| ydk::is_set(is_helddown.yfilter)
	|| ydk::is_set(is_lockdown.yfilter)
	|| ydk::is_set(is_verbatim.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(attribute_set_found.yfilter)
	|| ydk::is_set(has_xro_attribute_set.yfilter)
	|| ydk::is_set(xro_attribute_set_found.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(protected_by_path_option_index.yfilter)
	|| ydk::is_set(restored_from_path_option_index.yfilter)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index_is_valid.is_set || is_set(option_index_is_valid.yfilter)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.yfilter)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.yfilter)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.yfilter)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.yfilter)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.yfilter)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.yfilter)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.yfilter)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.yfilter)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (attribute_set_found.is_set || is_set(attribute_set_found.yfilter)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.yfilter)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.yfilter)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.yfilter)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.yfilter)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathCalculationError>();
        ent_->parent = this;
        path_calculation_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remerge-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::RemergeError>();
        ent_->parent = this;
        remerge_error.append(ent_);
        return ent_;
    }

    if(child_yang_name == "signalling-error")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::SignallingError>();
        ent_->parent = this;
        signalling_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set != nullptr)
    {
        _children["attribute-set"] = attribute_set;
    }

    if(xro_attribute_set != nullptr)
    {
        _children["xro-attribute-set"] = xro_attribute_set;
    }

    count_ = 0;
    for (auto ent_ : path_calculation_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remerge_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : signalling_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
        option_index_is_valid.value_namespace = name_space;
        option_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
        path_option_name.value_namespace = name_space;
        path_option_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
        explicit_path_id.value_namespace = name_space;
        explicit_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
        holddown_duration.value_namespace = name_space;
        holddown_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
        path_option_area_id.value_namespace = name_space;
        path_option_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
        is_strict_explicit_path.value_namespace = name_space;
        is_strict_explicit_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
        is_helddown.value_namespace = name_space;
        is_helddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
        is_lockdown.value_namespace = name_space;
        is_lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
        is_verbatim.value_namespace = name_space;
        is_verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
        attribute_set_found.value_namespace = name_space;
        attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
        has_xro_attribute_set.value_namespace = name_space;
        has_xro_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
        xro_attribute_set_found.value_namespace = name_space;
        xro_attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
        protected_by_path_option_index.value_namespace = name_space;
        protected_by_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
        restored_from_path_option_index.value_namespace = name_space;
        restored_from_path_option_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-name")
    {
        path_option_name.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id.yfilter = yfilter;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path.yfilter = yfilter;
    }
    if(value_path == "is-helddown")
    {
        is_helddown.yfilter = yfilter;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown.yfilter = yfilter;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index.yfilter = yfilter;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "xro-attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "option-index-is-valid" || name == "option-index" || name == "path-option-name" || name == "path-option-type" || name == "explicit-path-name" || name == "explicit-path-id" || name == "holddown-duration" || name == "pce-address" || name == "path-option-area-id" || name == "is-strict-explicit-path" || name == "is-helddown" || name == "is-lockdown" || name == "is-verbatim" || name == "is-disabled" || name == "has-attribute-set" || name == "attribute-set-found" || name == "has-xro-attribute-set" || name == "xro-attribute-set-found" || name == "is-segment-routing" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "path-option-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::~AttributeSet()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_union != nullptr)
    {
        _children["attribute-set-union"] = attribute_set_union;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_path_option != nullptr)
    {
        _children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        _children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        _children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        _children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        _children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        _children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        _children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "version-info")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        ent_->parent = this;
        version_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        _children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : version_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}


}
}

