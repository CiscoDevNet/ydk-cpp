
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::ReportingPccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "reporting-pcc-address"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::~ReportingPccAddress()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reporting-pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"},
    flags{YType::uint8, "flags"}
        ,
    sr_rro(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>())
{
    sr_rro->parent = this;

    yang_name = "rro"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::~Rro()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set
	|| flags.is_set
	|| (sr_rro !=  nullptr && sr_rro->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (sr_rro !=  nullptr && sr_rro->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-rro")
    {
        if(sr_rro == nullptr)
        {
            sr_rro = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>();
        }
        return sr_rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_rro != nullptr)
    {
        _children["sr-rro"] = sr_rro;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rro" || name == "rro-type" || name == "ipv4-address" || name == "mpls-label" || name == "flags")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::SrRro()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr>())
    , remote_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "sr-rro"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::~SrRro()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "sr-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::~LocalAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "sr-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::~RemoteAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}


}
}

