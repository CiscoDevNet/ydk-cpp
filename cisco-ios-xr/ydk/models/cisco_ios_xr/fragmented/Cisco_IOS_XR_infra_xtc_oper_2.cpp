
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::ComputedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr>())
    , remote_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "computed-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::~ComputedSrPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-sr-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_children() const
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "computed-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::~LocalAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "computed-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::~RemoteAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::LsppcepInformation()
    :
    pcepid{YType::uint32, "pcepid"},
    pcep_flag_d{YType::boolean, "pcep-flag-d"},
    pcep_flag_s{YType::boolean, "pcep-flag-s"},
    pcep_flag_r{YType::boolean, "pcep-flag-r"},
    pcep_flag_a{YType::boolean, "pcep-flag-a"},
    pcep_flag_o{YType::uint8, "pcep-flag-o"},
    pcep_flag_c{YType::uint8, "pcep-flag-c"}
        ,
    rsvp_error(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>())
{
    rsvp_error->parent = this;

    yang_name = "lsppcep-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::~LsppcepInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcepid.is_set
	|| pcep_flag_d.is_set
	|| pcep_flag_s.is_set
	|| pcep_flag_r.is_set
	|| pcep_flag_a.is_set
	|| pcep_flag_o.is_set
	|| pcep_flag_c.is_set
	|| (rsvp_error !=  nullptr && rsvp_error->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcepid.yfilter)
	|| ydk::is_set(pcep_flag_d.yfilter)
	|| ydk::is_set(pcep_flag_s.yfilter)
	|| ydk::is_set(pcep_flag_r.yfilter)
	|| ydk::is_set(pcep_flag_a.yfilter)
	|| ydk::is_set(pcep_flag_o.yfilter)
	|| ydk::is_set(pcep_flag_c.yfilter)
	|| (rsvp_error !=  nullptr && rsvp_error->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsppcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcepid.is_set || is_set(pcepid.yfilter)) leaf_name_data.push_back(pcepid.get_name_leafdata());
    if (pcep_flag_d.is_set || is_set(pcep_flag_d.yfilter)) leaf_name_data.push_back(pcep_flag_d.get_name_leafdata());
    if (pcep_flag_s.is_set || is_set(pcep_flag_s.yfilter)) leaf_name_data.push_back(pcep_flag_s.get_name_leafdata());
    if (pcep_flag_r.is_set || is_set(pcep_flag_r.yfilter)) leaf_name_data.push_back(pcep_flag_r.get_name_leafdata());
    if (pcep_flag_a.is_set || is_set(pcep_flag_a.yfilter)) leaf_name_data.push_back(pcep_flag_a.get_name_leafdata());
    if (pcep_flag_o.is_set || is_set(pcep_flag_o.yfilter)) leaf_name_data.push_back(pcep_flag_o.get_name_leafdata());
    if (pcep_flag_c.is_set || is_set(pcep_flag_c.yfilter)) leaf_name_data.push_back(pcep_flag_c.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-error")
    {
        if(rsvp_error == nullptr)
        {
            rsvp_error = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>();
        }
        return rsvp_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_error != nullptr)
    {
        _children["rsvp-error"] = rsvp_error;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcepid")
    {
        pcepid = value;
        pcepid.value_namespace = name_space;
        pcepid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d = value;
        pcep_flag_d.value_namespace = name_space;
        pcep_flag_d.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s = value;
        pcep_flag_s.value_namespace = name_space;
        pcep_flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r = value;
        pcep_flag_r.value_namespace = name_space;
        pcep_flag_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a = value;
        pcep_flag_a.value_namespace = name_space;
        pcep_flag_a.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o = value;
        pcep_flag_o.value_namespace = name_space;
        pcep_flag_o.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c = value;
        pcep_flag_c.value_namespace = name_space;
        pcep_flag_c.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcepid")
    {
        pcepid.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-error" || name == "pcepid" || name == "pcep-flag-d" || name == "pcep-flag-s" || name == "pcep-flag-r" || name == "pcep-flag-a" || name == "pcep-flag-o" || name == "pcep-flag-c")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::RsvpError()
    :
    node_address{YType::str, "node-address"},
    error_flags{YType::uint8, "error-flags"},
    error_code{YType::uint8, "error-code"},
    error_value{YType::uint16, "error-value"}
{

    yang_name = "rsvp-error"; yang_parent_name = "lsppcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::~RsvpError()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_data() const
{
    if (is_presence_container) return true;
    return node_address.is_set
	|| error_flags.is_set
	|| error_code.is_set
	|| error_value.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(error_flags.yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_value.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (error_flags.is_set || is_set(error_flags.yfilter)) leaf_name_data.push_back(error_flags.get_name_leafdata());
    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_value.is_set || is_set(error_value.yfilter)) leaf_name_data.push_back(error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-flags")
    {
        error_flags = value;
        error_flags.value_namespace = name_space;
        error_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-value")
    {
        error_value = value;
        error_value.value_namespace = name_space;
        error_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "error-flags")
    {
        error_flags.yfilter = yfilter;
    }
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-value")
    {
        error_value.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-address" || name == "error-flags" || name == "error-code" || name == "error-value")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::LspAssociationInfo()
    :
    association_type{YType::uint32, "association-type"},
    association_id{YType::uint32, "association-id"}
        ,
    association_source(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource>())
{
    association_source->parent = this;

    yang_name = "lsp-association-info"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::~LspAssociationInfo()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_data() const
{
    if (is_presence_container) return true;
    return association_type.is_set
	|| association_id.is_set
	|| (association_source !=  nullptr && association_source->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| (association_source !=  nullptr && association_source->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-association-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-source")
    {
        if(association_source == nullptr)
        {
            association_source = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource>();
        }
        return association_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association_source != nullptr)
    {
        _children["association-source"] = association_source;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-source" || name == "association-type" || name == "association-id")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::AssociationSource()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "association-source"; yang_parent_name = "lsp-association-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::~AssociationSource()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::LspAttributes()
    :
    affinity_exclude_any{YType::uint32, "affinity-exclude-any"},
    affinity_include_any{YType::uint32, "affinity-include-any"},
    affinity_include_all{YType::uint32, "affinity-include-all"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    local_protection{YType::boolean, "local-protection"}
{

    yang_name = "lsp-attributes"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::~LspAttributes()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_data() const
{
    if (is_presence_container) return true;
    return affinity_exclude_any.is_set
	|| affinity_include_any.is_set
	|| affinity_include_all.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| local_protection.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_exclude_any.yfilter)
	|| ydk::is_set(affinity_include_any.yfilter)
	|| ydk::is_set(affinity_include_all.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_protection.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_exclude_any.is_set || is_set(affinity_exclude_any.yfilter)) leaf_name_data.push_back(affinity_exclude_any.get_name_leafdata());
    if (affinity_include_any.is_set || is_set(affinity_include_any.yfilter)) leaf_name_data.push_back(affinity_include_any.get_name_leafdata());
    if (affinity_include_all.is_set || is_set(affinity_include_all.yfilter)) leaf_name_data.push_back(affinity_include_all.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_protection.is_set || is_set(local_protection.yfilter)) leaf_name_data.push_back(local_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any = value;
        affinity_exclude_any.value_namespace = name_space;
        affinity_exclude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any = value;
        affinity_include_any.value_namespace = name_space;
        affinity_include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all = value;
        affinity_include_all.value_namespace = name_space;
        affinity_include_all.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "local-protection")
    {
        local_protection = value;
        local_protection.value_namespace = name_space;
        local_protection.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-protection")
    {
        local_protection.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-exclude-any" || name == "affinity-include-any" || name == "affinity-include-all" || name == "setup-priority" || name == "hold-priority" || name == "local-protection")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::SubDelegatedPce()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sub-delegated-pce"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::~SubDelegatedPce()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-delegated-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::StateSyncPce()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "state-sync-pce"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::~StateSyncPce()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-sync-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

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

