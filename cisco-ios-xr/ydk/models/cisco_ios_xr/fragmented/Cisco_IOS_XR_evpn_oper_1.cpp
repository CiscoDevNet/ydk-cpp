
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_evpn_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
        ,
    two_byte_as(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
    , four_byte_as(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
    , v4_addr(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
    , es_import(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    if (is_presence_container) return true;
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        _children["es-import"] = es_import;
    }

    return _children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    if (is_presence_container) return true;
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Macs()
    :
    mac(this, {})
{

    yang_name = "macs"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        auto ent_ = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac>();
        ent_->parent = this;
        mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Active::EviDetail::EviChildren::Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    mac_address{YType::str, "mac-address"},
    ip_address{YType::str, "ip-address"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    ip_address_xr{YType::str, "ip-address-xr"},
    local_label{YType::uint32, "local-label"},
    num_paths{YType::uint32, "num-paths"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    soo_nexthop{YType::str, "soo-nexthop"},
    ipnh_address{YType::str, "ipnh-address"},
    esi_port_key{YType::uint16, "esi-port-key"},
    local_encap_type{YType::uint8, "local-encap-type"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_seq_id{YType::uint32, "local-seq-id"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    local_l3_label{YType::uint32, "local-l3-label"},
    router_mac_address{YType::str, "router-mac-address"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    internal_label{YType::uint32, "internal-label"},
    resolved{YType::boolean, "resolved"},
    local_is_static{YType::boolean, "local-is-static"},
    remote_is_static{YType::boolean, "remote-is-static"},
    local_etree_leaf{YType::boolean, "local-etree-leaf"},
    remote_etree_leaf{YType::boolean, "remote-etree-leaf"},
    local_attachment_circuit_id{YType::uint32, "local-attachment-circuit-id"},
    remote_attachment_circuit_id{YType::uint32, "remote-attachment-circuit-id"}
        ,
    evpn_instance(std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance>())
    , local_ethernet_segment_identifier(this, {})
    , remote_ethernet_segment_identifier(this, {})
    , path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "mac"; yang_parent_name = "macs"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_ethernet_segment_identifier.len(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.len(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| ethernet_tag.is_set
	|| mac_address.is_set
	|| ip_address.is_set
	|| ethernet_tag_xr.is_set
	|| mac_address_xr.is_set
	|| ip_address_xr.is_set
	|| local_label.is_set
	|| num_paths.is_set
	|| is_local_mac.is_set
	|| is_proxy_entry.is_set
	|| is_remote_mac.is_set
	|| soo_nexthop.is_set
	|| ipnh_address.is_set
	|| esi_port_key.is_set
	|| local_encap_type.is_set
	|| remote_encap_type.is_set
	|| learned_bridge_port_name.is_set
	|| local_seq_id.is_set
	|| remote_seq_id.is_set
	|| local_l3_label.is_set
	|| router_mac_address.is_set
	|| mac_flush_requested.is_set
	|| mac_flush_received.is_set
	|| internal_label.is_set
	|| resolved.is_set
	|| local_is_static.is_set
	|| remote_is_static.is_set
	|| local_etree_leaf.is_set
	|| remote_etree_leaf.is_set
	|| local_attachment_circuit_id.is_set
	|| remote_attachment_circuit_id.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<local_ethernet_segment_identifier.len(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.len(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(ip_address_xr.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(is_local_mac.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(is_remote_mac.yfilter)
	|| ydk::is_set(soo_nexthop.yfilter)
	|| ydk::is_set(ipnh_address.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(local_encap_type.yfilter)
	|| ydk::is_set(remote_encap_type.yfilter)
	|| ydk::is_set(learned_bridge_port_name.yfilter)
	|| ydk::is_set(local_seq_id.yfilter)
	|| ydk::is_set(remote_seq_id.yfilter)
	|| ydk::is_set(local_l3_label.yfilter)
	|| ydk::is_set(router_mac_address.yfilter)
	|| ydk::is_set(mac_flush_requested.yfilter)
	|| ydk::is_set(mac_flush_received.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(local_is_static.yfilter)
	|| ydk::is_set(remote_is_static.yfilter)
	|| ydk::is_set(local_etree_leaf.yfilter)
	|| ydk::is_set(remote_etree_leaf.yfilter)
	|| ydk::is_set(local_attachment_circuit_id.yfilter)
	|| ydk::is_set(remote_attachment_circuit_id.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.yfilter)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.yfilter)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.yfilter)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.yfilter)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());
    if (ipnh_address.is_set || is_set(ipnh_address.yfilter)) leaf_name_data.push_back(ipnh_address.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.yfilter)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.yfilter)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.yfilter)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.yfilter)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.yfilter)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (local_l3_label.is_set || is_set(local_l3_label.yfilter)) leaf_name_data.push_back(local_l3_label.get_name_leafdata());
    if (router_mac_address.is_set || is_set(router_mac_address.yfilter)) leaf_name_data.push_back(router_mac_address.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.yfilter)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.yfilter)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (local_is_static.is_set || is_set(local_is_static.yfilter)) leaf_name_data.push_back(local_is_static.get_name_leafdata());
    if (remote_is_static.is_set || is_set(remote_is_static.yfilter)) leaf_name_data.push_back(remote_is_static.get_name_leafdata());
    if (local_etree_leaf.is_set || is_set(local_etree_leaf.yfilter)) leaf_name_data.push_back(local_etree_leaf.get_name_leafdata());
    if (remote_etree_leaf.is_set || is_set(remote_etree_leaf.yfilter)) leaf_name_data.push_back(remote_etree_leaf.get_name_leafdata());
    if (local_attachment_circuit_id.is_set || is_set(local_attachment_circuit_id.yfilter)) leaf_name_data.push_back(local_attachment_circuit_id.get_name_leafdata());
    if (remote_attachment_circuit_id.is_set || is_set(remote_attachment_circuit_id.yfilter)) leaf_name_data.push_back(remote_attachment_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "local-ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier>();
        ent_->parent = this;
        local_ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier>();
        ent_->parent = this;
        remote_ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        ent_->parent = this;
        path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : local_ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
        ip_address_xr.value_namespace = name_space;
        ip_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
        is_local_mac.value_namespace = name_space;
        is_local_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry = value;
        is_proxy_entry.value_namespace = name_space;
        is_proxy_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
        is_remote_mac.value_namespace = name_space;
        is_remote_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
        soo_nexthop.value_namespace = name_space;
        soo_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address = value;
        ipnh_address.value_namespace = name_space;
        ipnh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
        local_encap_type.value_namespace = name_space;
        local_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
        remote_encap_type.value_namespace = name_space;
        remote_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
        learned_bridge_port_name.value_namespace = name_space;
        learned_bridge_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
        local_seq_id.value_namespace = name_space;
        local_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
        remote_seq_id.value_namespace = name_space;
        remote_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label = value;
        local_l3_label.value_namespace = name_space;
        local_l3_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address = value;
        router_mac_address.value_namespace = name_space;
        router_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
        mac_flush_requested.value_namespace = name_space;
        mac_flush_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
        mac_flush_received.value_namespace = name_space;
        mac_flush_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-static")
    {
        local_is_static = value;
        local_is_static.value_namespace = name_space;
        local_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static = value;
        remote_is_static.value_namespace = name_space;
        remote_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-etree-leaf")
    {
        local_etree_leaf = value;
        local_etree_leaf.value_namespace = name_space;
        local_etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-etree-leaf")
    {
        remote_etree_leaf = value;
        remote_etree_leaf.value_namespace = name_space;
        remote_etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-attachment-circuit-id")
    {
        local_attachment_circuit_id = value;
        local_attachment_circuit_id.value_namespace = name_space;
        local_attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-attachment-circuit-id")
    {
        remote_attachment_circuit_id = value;
        remote_attachment_circuit_id.value_namespace = name_space;
        remote_attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac.yfilter = yfilter;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop.yfilter = yfilter;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type.yfilter = yfilter;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type.yfilter = yfilter;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name.yfilter = yfilter;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id.yfilter = yfilter;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id.yfilter = yfilter;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label.yfilter = yfilter;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested.yfilter = yfilter;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "local-is-static")
    {
        local_is_static.yfilter = yfilter;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static.yfilter = yfilter;
    }
    if(value_path == "local-etree-leaf")
    {
        local_etree_leaf.yfilter = yfilter;
    }
    if(value_path == "remote-etree-leaf")
    {
        remote_etree_leaf.yfilter = yfilter;
    }
    if(value_path == "local-attachment-circuit-id")
    {
        local_attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-attachment-circuit-id")
    {
        remote_attachment_circuit_id.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "local-ethernet-segment-identifier" || name == "remote-ethernet-segment-identifier" || name == "path-buffer" || name == "evi" || name == "encapsulation" || name == "ethernet-tag" || name == "mac-address" || name == "ip-address" || name == "ethernet-tag-xr" || name == "mac-address-xr" || name == "ip-address-xr" || name == "local-label" || name == "num-paths" || name == "is-local-mac" || name == "is-proxy-entry" || name == "is-remote-mac" || name == "soo-nexthop" || name == "ipnh-address" || name == "esi-port-key" || name == "local-encap-type" || name == "remote-encap-type" || name == "learned-bridge-port-name" || name == "local-seq-id" || name == "remote-seq-id" || name == "local-l3-label" || name == "router-mac-address" || name == "mac-flush-requested" || name == "mac-flush-received" || name == "internal-label" || name == "resolved" || name == "local-is-static" || name == "remote-is-static" || name == "local-etree-leaf" || name == "remote-etree-leaf" || name == "local-attachment-circuit-id" || name == "remote-attachment-circuit-id")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::LocalEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "local-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::~LocalEthernetSegmentIdentifier()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::RemoteEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "remote-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::~RemoteEthernetSegmentIdentifier()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "path-buffer"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Active::Teps::Teps()
    :
    tep(this, {"tep_id"})
{

    yang_name = "teps"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::Teps::~Teps()
{
}

bool Evpn::Active::Teps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tep.len(); index++)
    {
        if(tep[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::Teps::has_operation() const
{
    for (std::size_t index=0; index<tep.len(); index++)
    {
        if(tep[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Active::Teps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::Teps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::Teps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::Teps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tep")
    {
        auto ent_ = std::make_shared<Evpn::Active::Teps::Tep>();
        ent_->parent = this;
        tep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::Teps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::Teps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Active::Teps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Active::Teps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tep")
        return true;
    return false;
}

Evpn::Active::Teps::Tep::Tep()
    :
    tep_id{YType::uint32, "tep-id"},
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    type{YType::uint8, "type"},
    use_count{YType::uint32, "use-count"},
    vrf_name{YType::str, "vrf-name"},
    vrf_table_id{YType::uint32, "vrf-table-id"},
    udp_port{YType::uint16, "udp-port"}
        ,
    local_info(std::make_shared<Evpn::Active::Teps::Tep::LocalInfo>())
    , remote_info(std::make_shared<Evpn::Active::Teps::Tep::RemoteInfo>())
{
    local_info->parent = this;
    remote_info->parent = this;

    yang_name = "tep"; yang_parent_name = "teps"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::Teps::Tep::~Tep()
{
}

bool Evpn::Active::Teps::Tep::has_data() const
{
    if (is_presence_container) return true;
    return tep_id.is_set
	|| tunnel_endpoint_id.is_set
	|| type.is_set
	|| use_count.is_set
	|| vrf_name.is_set
	|| vrf_table_id.is_set
	|| udp_port.is_set
	|| (local_info !=  nullptr && local_info->has_data())
	|| (remote_info !=  nullptr && remote_info->has_data());
}

bool Evpn::Active::Teps::Tep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tep_id.yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(use_count.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_table_id.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| (local_info !=  nullptr && local_info->has_operation())
	|| (remote_info !=  nullptr && remote_info->has_operation());
}

std::string Evpn::Active::Teps::Tep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/teps/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::Teps::Tep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tep";
    ADD_KEY_TOKEN(tep_id, "tep-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::Teps::Tep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tep_id.is_set || is_set(tep_id.yfilter)) leaf_name_data.push_back(tep_id.get_name_leafdata());
    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (use_count.is_set || is_set(use_count.yfilter)) leaf_name_data.push_back(use_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_table_id.is_set || is_set(vrf_table_id.yfilter)) leaf_name_data.push_back(vrf_table_id.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::Teps::Tep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-info")
    {
        if(local_info == nullptr)
        {
            local_info = std::make_shared<Evpn::Active::Teps::Tep::LocalInfo>();
        }
        return local_info;
    }

    if(child_yang_name == "remote-info")
    {
        if(remote_info == nullptr)
        {
            remote_info = std::make_shared<Evpn::Active::Teps::Tep::RemoteInfo>();
        }
        return remote_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::Teps::Tep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_info != nullptr)
    {
        _children["local-info"] = local_info;
    }

    if(remote_info != nullptr)
    {
        _children["remote-info"] = remote_info;
    }

    return _children;
}

void Evpn::Active::Teps::Tep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tep-id")
    {
        tep_id = value;
        tep_id.value_namespace = name_space;
        tep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-count")
    {
        use_count = value;
        use_count.value_namespace = name_space;
        use_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id = value;
        vrf_table_id.value_namespace = name_space;
        vrf_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::Teps::Tep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tep-id")
    {
        tep_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "use-count")
    {
        use_count.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
}

bool Evpn::Active::Teps::Tep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-info" || name == "remote-info" || name == "tep-id" || name == "tunnel-endpoint-id" || name == "type" || name == "use-count" || name == "vrf-name" || name == "vrf-table-id" || name == "udp-port")
        return true;
    return false;
}

Evpn::Active::Teps::Tep::LocalInfo::LocalInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "local-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Active::Teps::Tep::LocalInfo::~LocalInfo()
{
}

bool Evpn::Active::Teps::Tep::LocalInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Active::Teps::Tep::LocalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Active::Teps::Tep::LocalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::Teps::Tep::LocalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::Teps::Tep::LocalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::Teps::Tep::LocalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::Teps::Tep::LocalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::Teps::Tep::LocalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Active::Teps::Tep::LocalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Active::Teps::Tep::RemoteInfo::RemoteInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "remote-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Active::Teps::Tep::RemoteInfo::~RemoteInfo()
{
}

bool Evpn::Active::Teps::Tep::RemoteInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Active::Teps::Tep::RemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Active::Teps::Tep::RemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::Teps::Tep::RemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::Teps::Tep::RemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::Teps::Tep::RemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::Teps::Tep::RemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::Teps::Tep::RemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Active::Teps::Tep::RemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabels()
    :
    internal_label(this, {})
{

    yang_name = "internal-labels"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::~InternalLabels()
{
}

bool Evpn::Active::InternalLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::InternalLabels::has_operation() const
{
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Active::InternalLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-label")
    {
        auto ent_ = std::make_shared<Evpn::Active::InternalLabels::InternalLabel>();
        ent_->parent = this;
        internal_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : internal_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::InternalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Active::InternalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Active::InternalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-label")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::InternalLabel()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    esi{YType::str, "esi"},
    tag{YType::uint32, "tag"},
    internal_label{YType::uint32, "internal-label"},
    mac_num_paths{YType::uint32, "mac-num-paths"},
    ead_num_paths{YType::uint32, "ead-num-paths"},
    evi_num_paths{YType::uint32, "evi-num-paths"},
    sum_num_paths{YType::uint32, "sum-num-paths"},
    sum_num_active_paths{YType::uint32, "sum-num-active-paths"},
    resolved{YType::boolean, "resolved"},
    ecmp_disable{YType::boolean, "ecmp-disable"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"}
        ,
    evpn_instance(std::make_shared<Evpn::Active::InternalLabels::InternalLabel::EvpnInstance>())
    , mac_path_buffer(this, {})
    , ead_path_buffer(this, {})
    , evi_path_buffer(this, {})
    , summary_path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "internal-label"; yang_parent_name = "internal-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::~InternalLabel()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| esi.is_set
	|| tag.is_set
	|| internal_label.is_set
	|| mac_num_paths.is_set
	|| ead_num_paths.is_set
	|| evi_num_paths.is_set
	|| sum_num_paths.is_set
	|| sum_num_active_paths.is_set
	|| resolved.is_set
	|| ecmp_disable.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Active::InternalLabels::InternalLabel::has_operation() const
{
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(esi.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(mac_num_paths.yfilter)
	|| ydk::is_set(ead_num_paths.yfilter)
	|| ydk::is_set(evi_num_paths.yfilter)
	|| ydk::is_set(sum_num_paths.yfilter)
	|| ydk::is_set(sum_num_active_paths.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(ecmp_disable.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Active::InternalLabels::InternalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (esi.is_set || is_set(esi.yfilter)) leaf_name_data.push_back(esi.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (mac_num_paths.is_set || is_set(mac_num_paths.yfilter)) leaf_name_data.push_back(mac_num_paths.get_name_leafdata());
    if (ead_num_paths.is_set || is_set(ead_num_paths.yfilter)) leaf_name_data.push_back(ead_num_paths.get_name_leafdata());
    if (evi_num_paths.is_set || is_set(evi_num_paths.yfilter)) leaf_name_data.push_back(evi_num_paths.get_name_leafdata());
    if (sum_num_paths.is_set || is_set(sum_num_paths.yfilter)) leaf_name_data.push_back(sum_num_paths.get_name_leafdata());
    if (sum_num_active_paths.is_set || is_set(sum_num_active_paths.yfilter)) leaf_name_data.push_back(sum_num_active_paths.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (ecmp_disable.is_set || is_set(ecmp_disable.yfilter)) leaf_name_data.push_back(ecmp_disable.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Active::InternalLabels::InternalLabel::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "mac-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer>();
        ent_->parent = this;
        mac_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ead-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer>();
        ent_->parent = this;
        ead_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "evi-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer>();
        ent_->parent = this;
        evi_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "summary-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer>();
        ent_->parent = this;
        summary_path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : mac_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ead_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : evi_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : summary_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi")
    {
        esi = value;
        esi.value_namespace = name_space;
        esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths = value;
        mac_num_paths.value_namespace = name_space;
        mac_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths = value;
        ead_num_paths.value_namespace = name_space;
        ead_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths = value;
        evi_num_paths.value_namespace = name_space;
        evi_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths = value;
        sum_num_paths.value_namespace = name_space;
        sum_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths = value;
        sum_num_active_paths.value_namespace = name_space;
        sum_num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable = value;
        ecmp_disable.value_namespace = name_space;
        ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "esi")
    {
        esi.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths.yfilter = yfilter;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths.yfilter = yfilter;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "mac-path-buffer" || name == "ead-path-buffer" || name == "evi-path-buffer" || name == "summary-path-buffer" || name == "evi" || name == "encapsulation" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "esi" || name == "tag" || name == "internal-label" || name == "mac-num-paths" || name == "ead-num-paths" || name == "evi-num-paths" || name == "sum-num-paths" || name == "sum-num-active-paths" || name == "resolved" || name == "ecmp-disable" || name == "redundancy-single-active" || name == "redundancy-single-flow-active")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::MacPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "mac-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::~MacPathBuffer()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::EadPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "ead-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::~EadPathBuffer()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ead-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::EviPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "evi-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::~EviPathBuffer()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::SummaryPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "summary-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::~SummaryPathBuffer()
{
}

bool Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegments()
    :
    ethernet_segment(this, {})
{

    yang_name = "ethernet-segments"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Active::EthernetSegments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Active::EthernetSegments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::get_children() const
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

void Evpn::Active::EthernetSegments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Active::EthernetSegments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Active::EthernetSegments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    interface_name{YType::str, "interface-name"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    esi_system_identifier{YType::str, "esi-system-identifier"},
    esi_port_key{YType::uint32, "esi-port-key"},
    esi_system_priority{YType::uint32, "esi-system-priority"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::enumeration, "ethernet-segment-state"},
    if_handle{YType::str, "if-handle"},
    main_port_role{YType::enumeration, "main-port-role"},
    main_port_mac{YType::str, "main-port-mac"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    force_single_home{YType::boolean, "force-single-home"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    carving_timer{YType::uint32, "carving-timer"},
    carving_timer_left{YType::uint32, "carving-timer-left"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    service_carving_mcast_mode{YType::enumeration, "service-carving-mcast-mode"},
    primary_services_input{YType::str, "primary-services-input"},
    secondary_services_input{YType::str, "secondary-services-input"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    permanent_forwarder_ports{YType::uint32, "permanent-forwarder-ports"},
    elected_forwarder_ports{YType::uint32, "elected-forwarder-ports"},
    not_elected_forwarder_ports{YType::uint32, "not-elected-forwarder-ports"},
    not_config_forwarder_ports{YType::uint32, "not-config-forwarder-ports"},
    mp_protected{YType::boolean, "mp-protected"},
    nve_anycast_vtep{YType::boolean, "nve-anycast-vtep"},
    nve_ingress_replication{YType::boolean, "nve-ingress-replication"},
    local_split_horizon_group_label_valid{YType::boolean, "local-split-horizon-group-label-valid"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"}
        ,
    ethernet_segment_identifier(this, {})
    , primary_service(this, {})
    , secondary_service(this, {})
    , service_carving_i_sidelected_result(this, {})
    , service_carving_isid_not_elected_result(this, {})
    , service_carving_evi_elected_result(this, {})
    , service_carving_evi_not_elected_result(this, {})
    , service_carving_vni_elected_result(this, {})
    , service_carving_vni_not_elected_result(this, {})
    , next_hop(this, {})
    , service_carving_vpws_permanent_result(this, {})
    , remote_split_horizon_group_label(this, {})
{

    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| esi_system_identifier.is_set
	|| esi_port_key.is_set
	|| esi_system_priority.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| if_handle.is_set
	|| main_port_role.is_set
	|| main_port_mac.is_set
	|| num_up_p_ws.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| mac_flushing_mode_config.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| force_single_home.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| carving_timer.is_set
	|| carving_timer_left.is_set
	|| service_carving_mode.is_set
	|| service_carving_mcast_mode.is_set
	|| primary_services_input.is_set
	|| secondary_services_input.is_set
	|| forwarder_ports.is_set
	|| permanent_forwarder_ports.is_set
	|| elected_forwarder_ports.is_set
	|| not_elected_forwarder_ports.is_set
	|| not_config_forwarder_ports.is_set
	|| mp_protected.is_set
	|| nve_anycast_vtep.is_set
	|| nve_ingress_replication.is_set
	|| local_split_horizon_group_label_valid.is_set
	|| local_split_horizon_group_label.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(esi_system_identifier.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(esi_system_priority.yfilter)
	|| ydk::is_set(ethernet_segment_name.yfilter)
	|| ydk::is_set(ethernet_segment_state.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(main_port_role.yfilter)
	|| ydk::is_set(main_port_mac.yfilter)
	|| ydk::is_set(num_up_p_ws.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(rt_origin.yfilter)
	|| ydk::is_set(es_bgp_gates.yfilter)
	|| ydk::is_set(es_l2fib_gates.yfilter)
	|| ydk::is_set(mac_flushing_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_is_default.yfilter)
	|| ydk::is_set(load_balance_mode_oper.yfilter)
	|| ydk::is_set(force_single_home.yfilter)
	|| ydk::is_set(source_mac_oper.yfilter)
	|| ydk::is_set(source_mac_origin.yfilter)
	|| ydk::is_set(peering_timer.yfilter)
	|| ydk::is_set(peering_timer_left.yfilter)
	|| ydk::is_set(recovery_timer.yfilter)
	|| ydk::is_set(recovery_timer_left.yfilter)
	|| ydk::is_set(carving_timer.yfilter)
	|| ydk::is_set(carving_timer_left.yfilter)
	|| ydk::is_set(service_carving_mode.yfilter)
	|| ydk::is_set(service_carving_mcast_mode.yfilter)
	|| ydk::is_set(primary_services_input.yfilter)
	|| ydk::is_set(secondary_services_input.yfilter)
	|| ydk::is_set(forwarder_ports.yfilter)
	|| ydk::is_set(permanent_forwarder_ports.yfilter)
	|| ydk::is_set(elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_config_forwarder_ports.yfilter)
	|| ydk::is_set(mp_protected.yfilter)
	|| ydk::is_set(nve_anycast_vtep.yfilter)
	|| ydk::is_set(nve_ingress_replication.yfilter)
	|| ydk::is_set(local_split_horizon_group_label_valid.yfilter)
	|| ydk::is_set(local_split_horizon_group_label.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (esi_system_identifier.is_set || is_set(esi_system_identifier.yfilter)) leaf_name_data.push_back(esi_system_identifier.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (esi_system_priority.is_set || is_set(esi_system_priority.yfilter)) leaf_name_data.push_back(esi_system_priority.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.yfilter)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.yfilter)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.yfilter)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.yfilter)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.yfilter)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.yfilter)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.yfilter)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.yfilter)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.yfilter)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.yfilter)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.yfilter)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.yfilter)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.yfilter)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.yfilter)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.yfilter)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.yfilter)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.yfilter)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.yfilter)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.yfilter)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (carving_timer.is_set || is_set(carving_timer.yfilter)) leaf_name_data.push_back(carving_timer.get_name_leafdata());
    if (carving_timer_left.is_set || is_set(carving_timer_left.yfilter)) leaf_name_data.push_back(carving_timer_left.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.yfilter)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (service_carving_mcast_mode.is_set || is_set(service_carving_mcast_mode.yfilter)) leaf_name_data.push_back(service_carving_mcast_mode.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.yfilter)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.yfilter)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.yfilter)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (permanent_forwarder_ports.is_set || is_set(permanent_forwarder_ports.yfilter)) leaf_name_data.push_back(permanent_forwarder_ports.get_name_leafdata());
    if (elected_forwarder_ports.is_set || is_set(elected_forwarder_ports.yfilter)) leaf_name_data.push_back(elected_forwarder_ports.get_name_leafdata());
    if (not_elected_forwarder_ports.is_set || is_set(not_elected_forwarder_ports.yfilter)) leaf_name_data.push_back(not_elected_forwarder_ports.get_name_leafdata());
    if (not_config_forwarder_ports.is_set || is_set(not_config_forwarder_ports.yfilter)) leaf_name_data.push_back(not_config_forwarder_ports.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.yfilter)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (nve_anycast_vtep.is_set || is_set(nve_anycast_vtep.yfilter)) leaf_name_data.push_back(nve_anycast_vtep.get_name_leafdata());
    if (nve_ingress_replication.is_set || is_set(nve_ingress_replication.yfilter)) leaf_name_data.push_back(nve_ingress_replication.get_name_leafdata());
    if (local_split_horizon_group_label_valid.is_set || is_set(local_split_horizon_group_label_valid.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label_valid.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-service")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService>();
        ent_->parent = this;
        primary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "secondary-service")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService>();
        ent_->parent = this;
        secondary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-i-sidelected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult>();
        ent_->parent = this;
        service_carving_i_sidelected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-isid-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult>();
        ent_->parent = this;
        service_carving_isid_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult>();
        ent_->parent = this;
        service_carving_evi_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult>();
        ent_->parent = this;
        service_carving_evi_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult>();
        ent_->parent = this;
        service_carving_vni_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult>();
        ent_->parent = this;
        service_carving_vni_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vpws-permanent-result")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult>();
        ent_->parent = this;
        service_carving_vpws_permanent_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        auto ent_ = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        ent_->parent = this;
        remote_split_horizon_group_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : secondary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_i_sidelected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_isid_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vpws_permanent_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_split_horizon_group_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier = value;
        esi_system_identifier.value_namespace = name_space;
        esi_system_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority = value;
        esi_system_priority.value_namespace = name_space;
        esi_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
        ethernet_segment_name.value_namespace = name_space;
        ethernet_segment_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
        ethernet_segment_state.value_namespace = name_space;
        ethernet_segment_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
        main_port_role.value_namespace = name_space;
        main_port_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
        main_port_mac.value_namespace = name_space;
        main_port_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
        num_up_p_ws.value_namespace = name_space;
        num_up_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
        rt_origin.value_namespace = name_space;
        rt_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
        es_bgp_gates.value_namespace = name_space;
        es_bgp_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
        es_l2fib_gates.value_namespace = name_space;
        es_l2fib_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
        mac_flushing_mode_config.value_namespace = name_space;
        mac_flushing_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
        load_balance_mode_config.value_namespace = name_space;
        load_balance_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
        load_balance_mode_is_default.value_namespace = name_space;
        load_balance_mode_is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
        load_balance_mode_oper.value_namespace = name_space;
        load_balance_mode_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
        force_single_home.value_namespace = name_space;
        force_single_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
        source_mac_oper.value_namespace = name_space;
        source_mac_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
        source_mac_origin.value_namespace = name_space;
        source_mac_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
        peering_timer.value_namespace = name_space;
        peering_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
        peering_timer_left.value_namespace = name_space;
        peering_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
        recovery_timer.value_namespace = name_space;
        recovery_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
        recovery_timer_left.value_namespace = name_space;
        recovery_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer")
    {
        carving_timer = value;
        carving_timer.value_namespace = name_space;
        carving_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left = value;
        carving_timer_left.value_namespace = name_space;
        carving_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
        service_carving_mode.value_namespace = name_space;
        service_carving_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mcast-mode")
    {
        service_carving_mcast_mode = value;
        service_carving_mcast_mode.value_namespace = name_space;
        service_carving_mcast_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
        primary_services_input.value_namespace = name_space;
        primary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
        secondary_services_input.value_namespace = name_space;
        secondary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
        forwarder_ports.value_namespace = name_space;
        forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports = value;
        permanent_forwarder_ports.value_namespace = name_space;
        permanent_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports = value;
        elected_forwarder_ports.value_namespace = name_space;
        elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports = value;
        not_elected_forwarder_ports.value_namespace = name_space;
        not_elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports = value;
        not_config_forwarder_ports.value_namespace = name_space;
        not_config_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
        mp_protected.value_namespace = name_space;
        mp_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep = value;
        nve_anycast_vtep.value_namespace = name_space;
        nve_anycast_vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication = value;
        nve_ingress_replication.value_namespace = name_space;
        nve_ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid = value;
        local_split_horizon_group_label_valid.value_namespace = name_space;
        local_split_horizon_group_label_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
        local_split_horizon_group_label.value_namespace = name_space;
        local_split_horizon_group_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "main-port-role")
    {
        main_port_role.yfilter = yfilter;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac.yfilter = yfilter;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "rt-origin")
    {
        rt_origin.yfilter = yfilter;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates.yfilter = yfilter;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates.yfilter = yfilter;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper.yfilter = yfilter;
    }
    if(value_path == "force-single-home")
    {
        force_single_home.yfilter = yfilter;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper.yfilter = yfilter;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin.yfilter = yfilter;
    }
    if(value_path == "peering-timer")
    {
        peering_timer.yfilter = yfilter;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left.yfilter = yfilter;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left.yfilter = yfilter;
    }
    if(value_path == "carving-timer")
    {
        carving_timer.yfilter = yfilter;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left.yfilter = yfilter;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode.yfilter = yfilter;
    }
    if(value_path == "service-carving-mcast-mode")
    {
        service_carving_mcast_mode.yfilter = yfilter;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input.yfilter = yfilter;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input.yfilter = yfilter;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "mp-protected")
    {
        mp_protected.yfilter = yfilter;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep.yfilter = yfilter;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "primary-service" || name == "secondary-service" || name == "service-carving-i-sidelected-result" || name == "service-carving-isid-not-elected-result" || name == "service-carving-evi-elected-result" || name == "service-carving-evi-not-elected-result" || name == "service-carving-vni-elected-result" || name == "service-carving-vni-not-elected-result" || name == "next-hop" || name == "service-carving-vpws-permanent-result" || name == "remote-split-horizon-group-label" || name == "interface-name" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "esi-type" || name == "esi-system-identifier" || name == "esi-port-key" || name == "esi-system-priority" || name == "ethernet-segment-name" || name == "ethernet-segment-state" || name == "if-handle" || name == "main-port-role" || name == "main-port-mac" || name == "num-up-p-ws" || name == "route-target" || name == "rt-origin" || name == "es-bgp-gates" || name == "es-l2fib-gates" || name == "mac-flushing-mode-config" || name == "load-balance-mode-config" || name == "load-balance-mode-is-default" || name == "load-balance-mode-oper" || name == "force-single-home" || name == "source-mac-oper" || name == "source-mac-origin" || name == "peering-timer" || name == "peering-timer-left" || name == "recovery-timer" || name == "recovery-timer-left" || name == "carving-timer" || name == "carving-timer-left" || name == "service-carving-mode" || name == "service-carving-mcast-mode" || name == "primary-services-input" || name == "secondary-services-input" || name == "forwarder-ports" || name == "permanent-forwarder-ports" || name == "elected-forwarder-ports" || name == "not-elected-forwarder-ports" || name == "not-config-forwarder-ports" || name == "mp-protected" || name == "nve-anycast-vtep" || name == "nve-ingress-replication" || name == "local-split-horizon-group-label-valid" || name == "local-split-horizon-group-label")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::PrimaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "primary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::~PrimaryService()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-service";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::SecondaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "secondary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::~SecondaryService()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-service";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::ServiceCarvingISidelectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-i-sidelected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::~ServiceCarvingISidelectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-i-sidelected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::ServiceCarvingIsidNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-isid-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::~ServiceCarvingIsidNotElectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-isid-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::ServiceCarvingEviElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::~ServiceCarvingEviElectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::ServiceCarvingEviNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::~ServiceCarvingEviNotElectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::ServiceCarvingVniElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::~ServiceCarvingVniElectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::ServiceCarvingVniNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::~ServiceCarvingVniNotElectedResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"},
    df_dont_prempt{YType::boolean, "df-dont-prempt"},
    df_type{YType::uint8, "df-type"},
    df_pref{YType::uint16, "df-pref"}
{

    yang_name = "next-hop"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| df_dont_prempt.is_set
	|| df_type.is_set
	|| df_pref.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(df_dont_prempt.yfilter)
	|| ydk::is_set(df_type.yfilter)
	|| ydk::is_set(df_pref.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (df_dont_prempt.is_set || is_set(df_dont_prempt.yfilter)) leaf_name_data.push_back(df_dont_prempt.get_name_leafdata());
    if (df_type.is_set || is_set(df_type.yfilter)) leaf_name_data.push_back(df_type.get_name_leafdata());
    if (df_pref.is_set || is_set(df_pref.yfilter)) leaf_name_data.push_back(df_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt = value;
        df_dont_prempt.value_namespace = name_space;
        df_dont_prempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-type")
    {
        df_type = value;
        df_type.value_namespace = name_space;
        df_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-pref")
    {
        df_pref = value;
        df_pref.value_namespace = name_space;
        df_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt.yfilter = yfilter;
    }
    if(value_path == "df-type")
    {
        df_type.yfilter = yfilter;
    }
    if(value_path == "df-pref")
    {
        df_pref.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "df-dont-prempt" || name == "df-type" || name == "df-pref")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::ServiceCarvingVpwsPermanentResult()
    :
    vpn_id{YType::uint32, "vpn-id"},
    type{YType::enumeration, "type"},
    ethernet_tag{YType::uint32, "ethernet-tag"}
{

    yang_name = "service-carving-vpws-permanent-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::~ServiceCarvingVpwsPermanentResult()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set
	|| type.is_set
	|| ethernet_tag.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vpws-permanent-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "type" || name == "ethernet-tag")
        return true;
    return false;
}

Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| label.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

Evpn::Active::AcIds::AcIds()
    :
    ac_id(this, {})
{

    yang_name = "ac-ids"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::AcIds::~AcIds()
{
}

bool Evpn::Active::AcIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Active::AcIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::AcIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-id")
    {
        auto ent_ = std::make_shared<Evpn::Active::AcIds::AcId>();
        ent_->parent = this;
        ac_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::AcIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ac_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::AcIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Active::AcIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Active::AcIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id")
        return true;
    return false;
}

Evpn::Active::AcIds::AcId::AcId()
    :
    evi{YType::uint32, "evi"},
    ac_id{YType::uint32, "ac-id"},
    neighbor{YType::str, "neighbor"}
        ,
    evpn_instance(std::make_shared<Evpn::Active::AcIds::AcId::EvpnInstance>())
    , leaf_evis(this, {})
{
    evpn_instance->parent = this;

    yang_name = "ac-id"; yang_parent_name = "ac-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::AcIds::AcId::~AcId()
{
}

bool Evpn::Active::AcIds::AcId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_data())
            return true;
    }
    return evi.is_set
	|| ac_id.is_set
	|| neighbor.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Active::AcIds::AcId::has_operation() const
{
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Active::AcIds::AcId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ac-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::AcIds::AcId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Active::AcIds::AcId::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "leaf-evis")
    {
        auto ent_ = std::make_shared<Evpn::Active::AcIds::AcId::LeafEvis>();
        ent_->parent = this;
        leaf_evis.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::AcIds::AcId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : leaf_evis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Active::AcIds::AcId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::AcIds::AcId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Active::AcIds::AcId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "leaf-evis" || name == "evi" || name == "ac-id" || name == "neighbor")
        return true;
    return false;
}

Evpn::Active::AcIds::AcId::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "ac-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::AcIds::AcId::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Active::AcIds::AcId::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Active::AcIds::AcId::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Active::AcIds::AcId::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ac-ids/ac-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::AcIds::AcId::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::AcIds::AcId::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::AcIds::AcId::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::AcIds::AcId::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::AcIds::AcId::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::AcIds::AcId::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Active::AcIds::AcId::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Active::AcIds::AcId::LeafEvis::LeafEvis()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "leaf-evis"; yang_parent_name = "ac-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Active::AcIds::AcId::LeafEvis::~LeafEvis()
{
}

bool Evpn::Active::AcIds::AcId::LeafEvis::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Active::AcIds::AcId::LeafEvis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Active::AcIds::AcId::LeafEvis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ac-ids/ac-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Active::AcIds::AcId::LeafEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-evis";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Active::AcIds::AcId::LeafEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Active::AcIds::AcId::LeafEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Active::AcIds::AcId::LeafEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Active::AcIds::AcId::LeafEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Active::AcIds::AcId::LeafEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Active::AcIds::AcId::LeafEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::Standby()
    :
    evpn_groups(std::make_shared<Evpn::Standby::EvpnGroups>())
    , remote_shgs(std::make_shared<Evpn::Standby::RemoteShgs>())
    , client(std::make_shared<Evpn::Standby::Client>())
    , igmps(std::make_shared<Evpn::Standby::Igmps>())
    , evis(std::make_shared<Evpn::Standby::Evis>())
    , summary(std::make_shared<Evpn::Standby::Summary>())
    , evi_detail(std::make_shared<Evpn::Standby::EviDetail>())
    , teps(std::make_shared<Evpn::Standby::Teps>())
    , internal_labels(std::make_shared<Evpn::Standby::InternalLabels>())
    , ethernet_segments(std::make_shared<Evpn::Standby::EthernetSegments>())
    , ac_ids(std::make_shared<Evpn::Standby::AcIds>())
{
    evpn_groups->parent = this;
    remote_shgs->parent = this;
    client->parent = this;
    igmps->parent = this;
    evis->parent = this;
    summary->parent = this;
    evi_detail->parent = this;
    teps->parent = this;
    internal_labels->parent = this;
    ethernet_segments->parent = this;
    ac_ids->parent = this;

    yang_name = "standby"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::~Standby()
{
}

bool Evpn::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (evpn_groups !=  nullptr && evpn_groups->has_data())
	|| (remote_shgs !=  nullptr && remote_shgs->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (igmps !=  nullptr && igmps->has_data())
	|| (evis !=  nullptr && evis->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (evi_detail !=  nullptr && evi_detail->has_data())
	|| (teps !=  nullptr && teps->has_data())
	|| (internal_labels !=  nullptr && internal_labels->has_data())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_data())
	|| (ac_ids !=  nullptr && ac_ids->has_data());
}

bool Evpn::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (evpn_groups !=  nullptr && evpn_groups->has_operation())
	|| (remote_shgs !=  nullptr && remote_shgs->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (igmps !=  nullptr && igmps->has_operation())
	|| (evis !=  nullptr && evis->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (evi_detail !=  nullptr && evi_detail->has_operation())
	|| (teps !=  nullptr && teps->has_operation())
	|| (internal_labels !=  nullptr && internal_labels->has_operation())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_operation())
	|| (ac_ids !=  nullptr && ac_ids->has_operation());
}

std::string Evpn::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-groups")
    {
        if(evpn_groups == nullptr)
        {
            evpn_groups = std::make_shared<Evpn::Standby::EvpnGroups>();
        }
        return evpn_groups;
    }

    if(child_yang_name == "remote-shgs")
    {
        if(remote_shgs == nullptr)
        {
            remote_shgs = std::make_shared<Evpn::Standby::RemoteShgs>();
        }
        return remote_shgs;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Evpn::Standby::Client>();
        }
        return client;
    }

    if(child_yang_name == "igmps")
    {
        if(igmps == nullptr)
        {
            igmps = std::make_shared<Evpn::Standby::Igmps>();
        }
        return igmps;
    }

    if(child_yang_name == "evis")
    {
        if(evis == nullptr)
        {
            evis = std::make_shared<Evpn::Standby::Evis>();
        }
        return evis;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Evpn::Standby::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "evi-detail")
    {
        if(evi_detail == nullptr)
        {
            evi_detail = std::make_shared<Evpn::Standby::EviDetail>();
        }
        return evi_detail;
    }

    if(child_yang_name == "teps")
    {
        if(teps == nullptr)
        {
            teps = std::make_shared<Evpn::Standby::Teps>();
        }
        return teps;
    }

    if(child_yang_name == "internal-labels")
    {
        if(internal_labels == nullptr)
        {
            internal_labels = std::make_shared<Evpn::Standby::InternalLabels>();
        }
        return internal_labels;
    }

    if(child_yang_name == "ethernet-segments")
    {
        if(ethernet_segments == nullptr)
        {
            ethernet_segments = std::make_shared<Evpn::Standby::EthernetSegments>();
        }
        return ethernet_segments;
    }

    if(child_yang_name == "ac-ids")
    {
        if(ac_ids == nullptr)
        {
            ac_ids = std::make_shared<Evpn::Standby::AcIds>();
        }
        return ac_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_groups != nullptr)
    {
        _children["evpn-groups"] = evpn_groups;
    }

    if(remote_shgs != nullptr)
    {
        _children["remote-shgs"] = remote_shgs;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(igmps != nullptr)
    {
        _children["igmps"] = igmps;
    }

    if(evis != nullptr)
    {
        _children["evis"] = evis;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(evi_detail != nullptr)
    {
        _children["evi-detail"] = evi_detail;
    }

    if(teps != nullptr)
    {
        _children["teps"] = teps;
    }

    if(internal_labels != nullptr)
    {
        _children["internal-labels"] = internal_labels;
    }

    if(ethernet_segments != nullptr)
    {
        _children["ethernet-segments"] = ethernet_segments;
    }

    if(ac_ids != nullptr)
    {
        _children["ac-ids"] = ac_ids;
    }

    return _children;
}

void Evpn::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-groups" || name == "remote-shgs" || name == "client" || name == "igmps" || name == "evis" || name == "summary" || name == "evi-detail" || name == "teps" || name == "internal-labels" || name == "ethernet-segments" || name == "ac-ids")
        return true;
    return false;
}

Evpn::Standby::EvpnGroups::EvpnGroups()
    :
    evpn_group(this, {"group_number"})
{

    yang_name = "evpn-groups"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EvpnGroups::~EvpnGroups()
{
}

bool Evpn::Standby::EvpnGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_group.len(); index++)
    {
        if(evpn_group[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EvpnGroups::has_operation() const
{
    for (std::size_t index=0; index<evpn_group.len(); index++)
    {
        if(evpn_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EvpnGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EvpnGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EvpnGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EvpnGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-group")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EvpnGroups::EvpnGroup>();
        ent_->parent = this;
        evpn_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EvpnGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evpn_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EvpnGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EvpnGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EvpnGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-group")
        return true;
    return false;
}

Evpn::Standby::EvpnGroups::EvpnGroup::EvpnGroup()
    :
    group_number{YType::uint32, "group-number"},
    group_id{YType::uint32, "group-id"},
    state{YType::enumeration, "state"}
        ,
    core_interface(this, {})
    , access_interface(this, {})
{

    yang_name = "evpn-group"; yang_parent_name = "evpn-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EvpnGroups::EvpnGroup::~EvpnGroup()
{
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_interface.len(); index++)
    {
        if(core_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<access_interface.len(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| group_id.is_set
	|| state.is_set;
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::has_operation() const
{
    for (std::size_t index=0; index<core_interface.len(); index++)
    {
        if(core_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<access_interface.len(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Evpn::Standby::EvpnGroups::EvpnGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evpn-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EvpnGroups::EvpnGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-group";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EvpnGroups::EvpnGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EvpnGroups::EvpnGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-interface")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface>();
        ent_->parent = this;
        core_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "access-interface")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface>();
        ent_->parent = this;
        access_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EvpnGroups::EvpnGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : access_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EvpnGroups::EvpnGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EvpnGroups::EvpnGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-interface" || name == "access-interface" || name == "group-number" || name == "group-id" || name == "state")
        return true;
    return false;
}

Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::CoreInterface()
    :
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{

    yang_name = "core-interface"; yang_parent_name = "evpn-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::~CoreInterface()
{
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| state.is_set;
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "state")
        return true;
    return false;
}

Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{

    yang_name = "access-interface"; yang_parent_name = "evpn-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::~AccessInterface()
{
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| state.is_set;
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "state")
        return true;
    return false;
}

Evpn::Standby::RemoteShgs::RemoteShgs()
    :
    remote_shg(this, {})
{

    yang_name = "remote-shgs"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::RemoteShgs::~RemoteShgs()
{
}

bool Evpn::Standby::RemoteShgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_shg.len(); index++)
    {
        if(remote_shg[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::RemoteShgs::has_operation() const
{
    for (std::size_t index=0; index<remote_shg.len(); index++)
    {
        if(remote_shg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::RemoteShgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::RemoteShgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-shgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::RemoteShgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::RemoteShgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-shg")
    {
        auto ent_ = std::make_shared<Evpn::Standby::RemoteShgs::RemoteShg>();
        ent_->parent = this;
        remote_shg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::RemoteShgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_shg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::RemoteShgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::RemoteShgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::RemoteShgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-shg")
        return true;
    return false;
}

Evpn::Standby::RemoteShgs::RemoteShg::RemoteShg()
    :
    evi{YType::uint32, "evi"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"}
        ,
    ethernet_segment_identifier(this, {})
    , remote_split_horizon_group_label(this, {})
{

    yang_name = "remote-shg"; yang_parent_name = "remote-shgs"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::RemoteShgs::RemoteShg::~RemoteShg()
{
}

bool Evpn::Standby::RemoteShgs::RemoteShg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    return evi.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_vpn_id.is_set
	|| encapsulation.is_set;
}

bool Evpn::Standby::RemoteShgs::RemoteShg::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/remote-shgs/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-shg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::RemoteShgs::RemoteShg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::RemoteShgs::RemoteShg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        auto ent_ = std::make_shared<Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel>();
        ent_->parent = this;
        remote_split_horizon_group_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::RemoteShgs::RemoteShg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_split_horizon_group_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::RemoteShgs::RemoteShg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::RemoteShgs::RemoteShg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Evpn::Standby::RemoteShgs::RemoteShg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "remote-split-horizon-group-label" || name == "evi" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-vpn-id" || name == "encapsulation")
        return true;
    return false;
}

Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "remote-shg"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/remote-shgs/remote-shg/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "remote-shg"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| label.is_set;
}

bool Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/remote-shgs/remote-shg/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

Evpn::Standby::Client::Client()
{

    yang_name = "client"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Client::~Client()
{
}

bool Evpn::Standby::Client::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Evpn::Standby::Client::has_operation() const
{
    return is_set(yfilter);
}

std::string Evpn::Standby::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Evpn::Standby::Igmps::Igmps()
    :
    igmp(this, {})
{

    yang_name = "igmps"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Igmps::~Igmps()
{
}

bool Evpn::Standby::Igmps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igmp.len(); index++)
    {
        if(igmp[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::Igmps::has_operation() const
{
    for (std::size_t index=0; index<igmp.len(); index++)
    {
        if(igmp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::Igmps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Igmps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Igmps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Igmps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        auto ent_ = std::make_shared<Evpn::Standby::Igmps::Igmp>();
        ent_->parent = this;
        igmp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Igmps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igmp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::Igmps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::Igmps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::Igmps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Evpn::Standby::Igmps::Igmp::Igmp()
    :
    source_type{YType::uint32, "source-type"},
    is_leave{YType::uint32, "is-leave"},
    evi{YType::uint32, "evi"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    src_ip{YType::str, "src-ip"},
    grp_ip{YType::str, "grp-ip"},
    bd_id{YType::uint32, "bd-id"},
    bp_xcid{YType::uint32, "bp-xcid"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    evi_xr{YType::uint32, "evi-xr"},
    bd_id_xr{YType::uint32, "bd-id-xr"},
    route_type{YType::enumeration, "route-type"},
    source_addr{YType::str, "source-addr"},
    group_addr{YType::str, "group-addr"},
    ethernet_tag_id{YType::uint32, "ethernet-tag-id"},
    igmp_version{YType::enumeration, "igmp-version"},
    igmp_group_type{YType::enumeration, "igmp-group-type"},
    max_response_time{YType::uint8, "max-response-time"},
    resolved{YType::boolean, "resolved"}
        ,
    source_info(std::make_shared<Evpn::Standby::Igmps::Igmp::SourceInfo>())
    , ethernet_segment_identifier(this, {})
{
    source_info->parent = this;

    yang_name = "igmp"; yang_parent_name = "igmps"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Igmps::Igmp::~Igmp()
{
}

bool Evpn::Standby::Igmps::Igmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    return source_type.is_set
	|| is_leave.is_set
	|| evi.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| src_ip.is_set
	|| grp_ip.is_set
	|| bd_id.is_set
	|| bp_xcid.is_set
	|| ethernet_segment_name.is_set
	|| evi_xr.is_set
	|| bd_id_xr.is_set
	|| route_type.is_set
	|| source_addr.is_set
	|| group_addr.is_set
	|| ethernet_tag_id.is_set
	|| igmp_version.is_set
	|| igmp_group_type.is_set
	|| max_response_time.is_set
	|| resolved.is_set
	|| (source_info !=  nullptr && source_info->has_data());
}

bool Evpn::Standby::Igmps::Igmp::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(is_leave.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(grp_ip.yfilter)
	|| ydk::is_set(bd_id.yfilter)
	|| ydk::is_set(bp_xcid.yfilter)
	|| ydk::is_set(ethernet_segment_name.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(bd_id_xr.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(source_addr.yfilter)
	|| ydk::is_set(group_addr.yfilter)
	|| ydk::is_set(ethernet_tag_id.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(igmp_group_type.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| (source_info !=  nullptr && source_info->has_operation());
}

std::string Evpn::Standby::Igmps::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/igmps/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Igmps::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Igmps::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (is_leave.is_set || is_set(is_leave.yfilter)) leaf_name_data.push_back(is_leave.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (grp_ip.is_set || is_set(grp_ip.yfilter)) leaf_name_data.push_back(grp_ip.get_name_leafdata());
    if (bd_id.is_set || is_set(bd_id.yfilter)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (bp_xcid.is_set || is_set(bp_xcid.yfilter)) leaf_name_data.push_back(bp_xcid.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.yfilter)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (bd_id_xr.is_set || is_set(bd_id_xr.yfilter)) leaf_name_data.push_back(bd_id_xr.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.yfilter)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (group_addr.is_set || is_set(group_addr.yfilter)) leaf_name_data.push_back(group_addr.get_name_leafdata());
    if (ethernet_tag_id.is_set || is_set(ethernet_tag_id.yfilter)) leaf_name_data.push_back(ethernet_tag_id.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (igmp_group_type.is_set || is_set(igmp_group_type.yfilter)) leaf_name_data.push_back(igmp_group_type.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Igmps::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-info")
    {
        if(source_info == nullptr)
        {
            source_info = std::make_shared<Evpn::Standby::Igmps::Igmp::SourceInfo>();
        }
        return source_info;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Igmps::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_info != nullptr)
    {
        _children["source-info"] = source_info;
    }

    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::Igmps::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-leave")
    {
        is_leave = value;
        is_leave.value_namespace = name_space;
        is_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp-ip")
    {
        grp_ip = value;
        grp_ip.value_namespace = name_space;
        grp_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-id")
    {
        bd_id = value;
        bd_id.value_namespace = name_space;
        bd_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-xcid")
    {
        bp_xcid = value;
        bp_xcid.value_namespace = name_space;
        bp_xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
        ethernet_segment_name.value_namespace = name_space;
        ethernet_segment_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-id-xr")
    {
        bd_id_xr = value;
        bd_id_xr.value_namespace = name_space;
        bd_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-addr")
    {
        source_addr = value;
        source_addr.value_namespace = name_space;
        source_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-addr")
    {
        group_addr = value;
        group_addr.value_namespace = name_space;
        group_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id = value;
        ethernet_tag_id.value_namespace = name_space;
        ethernet_tag_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-group-type")
    {
        igmp_group_type = value;
        igmp_group_type.value_namespace = name_space;
        igmp_group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Igmps::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "is-leave")
    {
        is_leave.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "grp-ip")
    {
        grp_ip.yfilter = yfilter;
    }
    if(value_path == "bd-id")
    {
        bd_id.yfilter = yfilter;
    }
    if(value_path == "bp-xcid")
    {
        bp_xcid.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "bd-id-xr")
    {
        bd_id_xr.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "source-addr")
    {
        source_addr.yfilter = yfilter;
    }
    if(value_path == "group-addr")
    {
        group_addr.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "igmp-group-type")
    {
        igmp_group_type.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
}

bool Evpn::Standby::Igmps::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-info" || name == "ethernet-segment-identifier" || name == "source-type" || name == "is-leave" || name == "evi" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "src-ip" || name == "grp-ip" || name == "bd-id" || name == "bp-xcid" || name == "ethernet-segment-name" || name == "evi-xr" || name == "bd-id-xr" || name == "route-type" || name == "source-addr" || name == "group-addr" || name == "ethernet-tag-id" || name == "igmp-version" || name == "igmp-group-type" || name == "max-response-time" || name == "resolved")
        return true;
    return false;
}

Evpn::Standby::Igmps::Igmp::SourceInfo::SourceInfo()
    :
    type{YType::enumeration, "type"},
    remote_info{YType::str, "remote-info"}
        ,
    local_info(std::make_shared<Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo>())
{
    local_info->parent = this;

    yang_name = "source-info"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Igmps::Igmp::SourceInfo::~SourceInfo()
{
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| remote_info.is_set
	|| (local_info !=  nullptr && local_info->has_data());
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(remote_info.yfilter)
	|| (local_info !=  nullptr && local_info->has_operation());
}

std::string Evpn::Standby::Igmps::Igmp::SourceInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/igmps/igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Igmps::Igmp::SourceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Igmps::Igmp::SourceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (remote_info.is_set || is_set(remote_info.yfilter)) leaf_name_data.push_back(remote_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Igmps::Igmp::SourceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-info")
    {
        if(local_info == nullptr)
        {
            local_info = std::make_shared<Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo>();
        }
        return local_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Igmps::Igmp::SourceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_info != nullptr)
    {
        _children["local-info"] = local_info;
    }

    return _children;
}

void Evpn::Standby::Igmps::Igmp::SourceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-info")
    {
        remote_info = value;
        remote_info.value_namespace = name_space;
        remote_info.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Igmps::Igmp::SourceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "remote-info")
    {
        remote_info.yfilter = yfilter;
    }
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-info" || name == "type" || name == "remote-info")
        return true;
    return false;
}

Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::LocalInfo()
    :
    if_name{YType::str, "if-name"}
{

    yang_name = "local-info"; yang_parent_name = "source-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::~LocalInfo()
{
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::has_data() const
{
    if (is_presence_container) return true;
    return if_name.is_set;
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter);
}

std::string Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/igmps/igmp/source-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-name")
        return true;
    return false;
}

Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/igmps/igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::Evis::Evis()
    :
    evi(this, {})
{

    yang_name = "evis"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Evis::~Evis()
{
}

bool Evpn::Standby::Evis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::Evis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Evis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi")
    {
        auto ent_ = std::make_shared<Evpn::Standby::Evis::Evi>();
        ent_->parent = this;
        evi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Evis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::Evis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::Evis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::Evis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi")
        return true;
    return false;
}

Evpn::Standby::Evis::Evi::Evi()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evi"; yang_parent_name = "evis"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Evis::Evi::~Evi()
{
}

bool Evpn::Standby::Evis::Evi::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| encapsulation.is_set
	|| ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::Evis::Evi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::Evis::Evi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Evis::Evi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Evis::Evi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Evis::Evi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Evis::Evi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::Evis::Evi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "encapsulation" || name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::Summary::Summary()
    :
    router_id{YType::str, "router-id"},
    as{YType::uint32, "as"},
    ev_is{YType::uint32, "ev-is"},
    tunnel_endpoints{YType::uint32, "tunnel-endpoints"},
    local_mac_routes{YType::uint32, "local-mac-routes"},
    local_ipv4_mac_routes{YType::uint32, "local-ipv4-mac-routes"},
    local_ipv6_mac_routes{YType::uint32, "local-ipv6-mac-routes"},
    es_global_mac_routes{YType::uint32, "es-global-mac-routes"},
    remote_mac_routes{YType::uint32, "remote-mac-routes"},
    remote_soo_mac_routes{YType::uint32, "remote-soo-mac-routes"},
    remote_ipv4_mac_routes{YType::uint32, "remote-ipv4-mac-routes"},
    remote_ipv6_mac_routes{YType::uint32, "remote-ipv6-mac-routes"},
    local_imcast_routes{YType::uint32, "local-imcast-routes"},
    remote_imcast_routes{YType::uint32, "remote-imcast-routes"},
    labels{YType::uint32, "labels"},
    es_entries{YType::uint32, "es-entries"},
    neighbor_entries{YType::uint32, "neighbor-entries"},
    local_ead_routes{YType::uint32, "local-ead-routes"},
    remote_ead_routes{YType::uint32, "remote-ead-routes"},
    global_source_mac{YType::str, "global-source-mac"},
    peering_time{YType::uint32, "peering-time"},
    recovery_time{YType::uint32, "recovery-time"},
    carving_time{YType::uint32, "carving-time"},
    cost_out{YType::boolean, "cost-out"},
    startup_cost_in_time{YType::uint32, "startup-cost-in-time"},
    l2rib_throttle{YType::boolean, "l2rib-throttle"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"}
{

    yang_name = "summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Summary::~Summary()
{
}

bool Evpn::Standby::Summary::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| as.is_set
	|| ev_is.is_set
	|| tunnel_endpoints.is_set
	|| local_mac_routes.is_set
	|| local_ipv4_mac_routes.is_set
	|| local_ipv6_mac_routes.is_set
	|| es_global_mac_routes.is_set
	|| remote_mac_routes.is_set
	|| remote_soo_mac_routes.is_set
	|| remote_ipv4_mac_routes.is_set
	|| remote_ipv6_mac_routes.is_set
	|| local_imcast_routes.is_set
	|| remote_imcast_routes.is_set
	|| labels.is_set
	|| es_entries.is_set
	|| neighbor_entries.is_set
	|| local_ead_routes.is_set
	|| remote_ead_routes.is_set
	|| global_source_mac.is_set
	|| peering_time.is_set
	|| recovery_time.is_set
	|| carving_time.is_set
	|| cost_out.is_set
	|| startup_cost_in_time.is_set
	|| l2rib_throttle.is_set
	|| logging_df_election_enabled.is_set;
}

bool Evpn::Standby::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(ev_is.yfilter)
	|| ydk::is_set(tunnel_endpoints.yfilter)
	|| ydk::is_set(local_mac_routes.yfilter)
	|| ydk::is_set(local_ipv4_mac_routes.yfilter)
	|| ydk::is_set(local_ipv6_mac_routes.yfilter)
	|| ydk::is_set(es_global_mac_routes.yfilter)
	|| ydk::is_set(remote_mac_routes.yfilter)
	|| ydk::is_set(remote_soo_mac_routes.yfilter)
	|| ydk::is_set(remote_ipv4_mac_routes.yfilter)
	|| ydk::is_set(remote_ipv6_mac_routes.yfilter)
	|| ydk::is_set(local_imcast_routes.yfilter)
	|| ydk::is_set(remote_imcast_routes.yfilter)
	|| ydk::is_set(labels.yfilter)
	|| ydk::is_set(es_entries.yfilter)
	|| ydk::is_set(neighbor_entries.yfilter)
	|| ydk::is_set(local_ead_routes.yfilter)
	|| ydk::is_set(remote_ead_routes.yfilter)
	|| ydk::is_set(global_source_mac.yfilter)
	|| ydk::is_set(peering_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(carving_time.yfilter)
	|| ydk::is_set(cost_out.yfilter)
	|| ydk::is_set(startup_cost_in_time.yfilter)
	|| ydk::is_set(l2rib_throttle.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter);
}

std::string Evpn::Standby::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (ev_is.is_set || is_set(ev_is.yfilter)) leaf_name_data.push_back(ev_is.get_name_leafdata());
    if (tunnel_endpoints.is_set || is_set(tunnel_endpoints.yfilter)) leaf_name_data.push_back(tunnel_endpoints.get_name_leafdata());
    if (local_mac_routes.is_set || is_set(local_mac_routes.yfilter)) leaf_name_data.push_back(local_mac_routes.get_name_leafdata());
    if (local_ipv4_mac_routes.is_set || is_set(local_ipv4_mac_routes.yfilter)) leaf_name_data.push_back(local_ipv4_mac_routes.get_name_leafdata());
    if (local_ipv6_mac_routes.is_set || is_set(local_ipv6_mac_routes.yfilter)) leaf_name_data.push_back(local_ipv6_mac_routes.get_name_leafdata());
    if (es_global_mac_routes.is_set || is_set(es_global_mac_routes.yfilter)) leaf_name_data.push_back(es_global_mac_routes.get_name_leafdata());
    if (remote_mac_routes.is_set || is_set(remote_mac_routes.yfilter)) leaf_name_data.push_back(remote_mac_routes.get_name_leafdata());
    if (remote_soo_mac_routes.is_set || is_set(remote_soo_mac_routes.yfilter)) leaf_name_data.push_back(remote_soo_mac_routes.get_name_leafdata());
    if (remote_ipv4_mac_routes.is_set || is_set(remote_ipv4_mac_routes.yfilter)) leaf_name_data.push_back(remote_ipv4_mac_routes.get_name_leafdata());
    if (remote_ipv6_mac_routes.is_set || is_set(remote_ipv6_mac_routes.yfilter)) leaf_name_data.push_back(remote_ipv6_mac_routes.get_name_leafdata());
    if (local_imcast_routes.is_set || is_set(local_imcast_routes.yfilter)) leaf_name_data.push_back(local_imcast_routes.get_name_leafdata());
    if (remote_imcast_routes.is_set || is_set(remote_imcast_routes.yfilter)) leaf_name_data.push_back(remote_imcast_routes.get_name_leafdata());
    if (labels.is_set || is_set(labels.yfilter)) leaf_name_data.push_back(labels.get_name_leafdata());
    if (es_entries.is_set || is_set(es_entries.yfilter)) leaf_name_data.push_back(es_entries.get_name_leafdata());
    if (neighbor_entries.is_set || is_set(neighbor_entries.yfilter)) leaf_name_data.push_back(neighbor_entries.get_name_leafdata());
    if (local_ead_routes.is_set || is_set(local_ead_routes.yfilter)) leaf_name_data.push_back(local_ead_routes.get_name_leafdata());
    if (remote_ead_routes.is_set || is_set(remote_ead_routes.yfilter)) leaf_name_data.push_back(remote_ead_routes.get_name_leafdata());
    if (global_source_mac.is_set || is_set(global_source_mac.yfilter)) leaf_name_data.push_back(global_source_mac.get_name_leafdata());
    if (peering_time.is_set || is_set(peering_time.yfilter)) leaf_name_data.push_back(peering_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (carving_time.is_set || is_set(carving_time.yfilter)) leaf_name_data.push_back(carving_time.get_name_leafdata());
    if (cost_out.is_set || is_set(cost_out.yfilter)) leaf_name_data.push_back(cost_out.get_name_leafdata());
    if (startup_cost_in_time.is_set || is_set(startup_cost_in_time.yfilter)) leaf_name_data.push_back(startup_cost_in_time.get_name_leafdata());
    if (l2rib_throttle.is_set || is_set(l2rib_throttle.yfilter)) leaf_name_data.push_back(l2rib_throttle.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ev-is")
    {
        ev_is = value;
        ev_is.value_namespace = name_space;
        ev_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-endpoints")
    {
        tunnel_endpoints = value;
        tunnel_endpoints.value_namespace = name_space;
        tunnel_endpoints.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes = value;
        local_mac_routes.value_namespace = name_space;
        local_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes = value;
        local_ipv4_mac_routes.value_namespace = name_space;
        local_ipv4_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes = value;
        local_ipv6_mac_routes.value_namespace = name_space;
        local_ipv6_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes = value;
        es_global_mac_routes.value_namespace = name_space;
        es_global_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes = value;
        remote_mac_routes.value_namespace = name_space;
        remote_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes = value;
        remote_soo_mac_routes.value_namespace = name_space;
        remote_soo_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes = value;
        remote_ipv4_mac_routes.value_namespace = name_space;
        remote_ipv4_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes = value;
        remote_ipv6_mac_routes.value_namespace = name_space;
        remote_ipv6_mac_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes = value;
        local_imcast_routes.value_namespace = name_space;
        local_imcast_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes = value;
        remote_imcast_routes.value_namespace = name_space;
        remote_imcast_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labels")
    {
        labels = value;
        labels.value_namespace = name_space;
        labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-entries")
    {
        es_entries = value;
        es_entries.value_namespace = name_space;
        es_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries = value;
        neighbor_entries.value_namespace = name_space;
        neighbor_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes = value;
        local_ead_routes.value_namespace = name_space;
        local_ead_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes = value;
        remote_ead_routes.value_namespace = name_space;
        remote_ead_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac = value;
        global_source_mac.value_namespace = name_space;
        global_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-time")
    {
        peering_time = value;
        peering_time.value_namespace = name_space;
        peering_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-time")
    {
        carving_time = value;
        carving_time.value_namespace = name_space;
        carving_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-out")
    {
        cost_out = value;
        cost_out.value_namespace = name_space;
        cost_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-cost-in-time")
    {
        startup_cost_in_time = value;
        startup_cost_in_time.value_namespace = name_space;
        startup_cost_in_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle = value;
        l2rib_throttle.value_namespace = name_space;
        l2rib_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "ev-is")
    {
        ev_is.yfilter = yfilter;
    }
    if(value_path == "tunnel-endpoints")
    {
        tunnel_endpoints.yfilter = yfilter;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes.yfilter = yfilter;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes.yfilter = yfilter;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes.yfilter = yfilter;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes.yfilter = yfilter;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes.yfilter = yfilter;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes.yfilter = yfilter;
    }
    if(value_path == "labels")
    {
        labels.yfilter = yfilter;
    }
    if(value_path == "es-entries")
    {
        es_entries.yfilter = yfilter;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries.yfilter = yfilter;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes.yfilter = yfilter;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes.yfilter = yfilter;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac.yfilter = yfilter;
    }
    if(value_path == "peering-time")
    {
        peering_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "carving-time")
    {
        carving_time.yfilter = yfilter;
    }
    if(value_path == "cost-out")
    {
        cost_out.yfilter = yfilter;
    }
    if(value_path == "startup-cost-in-time")
    {
        startup_cost_in_time.yfilter = yfilter;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
}

bool Evpn::Standby::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "as" || name == "ev-is" || name == "tunnel-endpoints" || name == "local-mac-routes" || name == "local-ipv4-mac-routes" || name == "local-ipv6-mac-routes" || name == "es-global-mac-routes" || name == "remote-mac-routes" || name == "remote-soo-mac-routes" || name == "remote-ipv4-mac-routes" || name == "remote-ipv6-mac-routes" || name == "local-imcast-routes" || name == "remote-imcast-routes" || name == "labels" || name == "es-entries" || name == "neighbor-entries" || name == "local-ead-routes" || name == "remote-ead-routes" || name == "global-source-mac" || name == "peering-time" || name == "recovery-time" || name == "carving-time" || name == "cost-out" || name == "startup-cost-in-time" || name == "l2rib-throttle" || name == "logging-df-election-enabled")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviDetail()
    :
    elements(std::make_shared<Evpn::Standby::EviDetail::Elements>())
    , evi_children(std::make_shared<Evpn::Standby::EviDetail::EviChildren>())
{
    elements->parent = this;
    evi_children->parent = this;

    yang_name = "evi-detail"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::~EviDetail()
{
}

bool Evpn::Standby::EviDetail::has_data() const
{
    if (is_presence_container) return true;
    return (elements !=  nullptr && elements->has_data())
	|| (evi_children !=  nullptr && evi_children->has_data());
}

bool Evpn::Standby::EviDetail::has_operation() const
{
    return is_set(yfilter)
	|| (elements !=  nullptr && elements->has_operation())
	|| (evi_children !=  nullptr && evi_children->has_operation());
}

std::string Evpn::Standby::EviDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "elements")
    {
        if(elements == nullptr)
        {
            elements = std::make_shared<Evpn::Standby::EviDetail::Elements>();
        }
        return elements;
    }

    if(child_yang_name == "evi-children")
    {
        if(evi_children == nullptr)
        {
            evi_children = std::make_shared<Evpn::Standby::EviDetail::EviChildren>();
        }
        return evi_children;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(elements != nullptr)
    {
        _children["elements"] = elements;
    }

    if(evi_children != nullptr)
    {
        _children["evi-children"] = evi_children;
    }

    return _children;
}

void Evpn::Standby::EviDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "elements" || name == "evi-children")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Elements()
    :
    element(this, {})
{

    yang_name = "elements"; yang_parent_name = "evi-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::~Elements()
{
}

bool Evpn::Standby::EviDetail::Elements::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<element.len(); index++)
    {
        if(element[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::Elements::has_operation() const
{
    for (std::size_t index=0; index<element.len(); index++)
    {
        if(element[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "elements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "element")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element>();
        ent_->parent = this;
        element.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : element.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::Elements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::Elements::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::Elements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "element")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::Element()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    evi_xr{YType::uint32, "evi-xr"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"},
    description{YType::str, "description"},
    unicast_label{YType::uint32, "unicast-label"},
    multicast_label{YType::uint32, "multicast-label"},
    cw_disable{YType::boolean, "cw-disable"},
    table_policy_name{YType::str, "table-policy-name"},
    forward_class{YType::uint8, "forward-class"},
    rt_import_block_set{YType::boolean, "rt-import-block-set"},
    rt_export_block_set{YType::boolean, "rt-export-block-set"},
    advertise_mac{YType::boolean, "advertise-mac"},
    etree_leaf{YType::boolean, "etree-leaf"},
    advertise_bvi_mac{YType::boolean, "advertise-bvi-mac"},
    aliasing_disabled{YType::boolean, "aliasing-disabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    reoriginate_disabled{YType::boolean, "reoriginate-disabled"},
    stitching{YType::boolean, "stitching"},
    multicast_source_connected{YType::boolean, "multicast-source-connected"},
    bgp_implicit_import_disabled{YType::boolean, "bgp-implicit-import-disabled"},
    vrf_name{YType::str, "vrf-name"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::EvpnInstance>())
    , flow_label(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::FlowLabel>())
    , rd_auto(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto>())
    , rd_configured(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured>())
    , rt_auto(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto>())
{
    evpn_instance->parent = this;
    flow_label->parent = this;
    rd_auto->parent = this;
    rd_configured->parent = this;
    rt_auto->parent = this;

    yang_name = "element"; yang_parent_name = "elements"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::~Element()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| encapsulation.is_set
	|| evi_xr.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set
	|| description.is_set
	|| unicast_label.is_set
	|| multicast_label.is_set
	|| cw_disable.is_set
	|| table_policy_name.is_set
	|| forward_class.is_set
	|| rt_import_block_set.is_set
	|| rt_export_block_set.is_set
	|| advertise_mac.is_set
	|| etree_leaf.is_set
	|| advertise_bvi_mac.is_set
	|| aliasing_disabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| reoriginate_disabled.is_set
	|| stitching.is_set
	|| multicast_source_connected.is_set
	|| bgp_implicit_import_disabled.is_set
	|| vrf_name.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data())
	|| (flow_label !=  nullptr && flow_label->has_data())
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data())
	|| (rt_auto !=  nullptr && rt_auto->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(evi_xr.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(unicast_label.yfilter)
	|| ydk::is_set(multicast_label.yfilter)
	|| ydk::is_set(cw_disable.yfilter)
	|| ydk::is_set(table_policy_name.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(rt_import_block_set.yfilter)
	|| ydk::is_set(rt_export_block_set.yfilter)
	|| ydk::is_set(advertise_mac.yfilter)
	|| ydk::is_set(etree_leaf.yfilter)
	|| ydk::is_set(advertise_bvi_mac.yfilter)
	|| ydk::is_set(aliasing_disabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(reoriginate_disabled.yfilter)
	|| ydk::is_set(stitching.yfilter)
	|| ydk::is_set(multicast_source_connected.yfilter)
	|| ydk::is_set(bgp_implicit_import_disabled.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation())
	|| (flow_label !=  nullptr && flow_label->has_operation())
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation())
	|| (rt_auto !=  nullptr && rt_auto->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "element";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.yfilter)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (unicast_label.is_set || is_set(unicast_label.yfilter)) leaf_name_data.push_back(unicast_label.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.yfilter)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (cw_disable.is_set || is_set(cw_disable.yfilter)) leaf_name_data.push_back(cw_disable.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.yfilter)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (rt_import_block_set.is_set || is_set(rt_import_block_set.yfilter)) leaf_name_data.push_back(rt_import_block_set.get_name_leafdata());
    if (rt_export_block_set.is_set || is_set(rt_export_block_set.yfilter)) leaf_name_data.push_back(rt_export_block_set.get_name_leafdata());
    if (advertise_mac.is_set || is_set(advertise_mac.yfilter)) leaf_name_data.push_back(advertise_mac.get_name_leafdata());
    if (etree_leaf.is_set || is_set(etree_leaf.yfilter)) leaf_name_data.push_back(etree_leaf.get_name_leafdata());
    if (advertise_bvi_mac.is_set || is_set(advertise_bvi_mac.yfilter)) leaf_name_data.push_back(advertise_bvi_mac.get_name_leafdata());
    if (aliasing_disabled.is_set || is_set(aliasing_disabled.yfilter)) leaf_name_data.push_back(aliasing_disabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (reoriginate_disabled.is_set || is_set(reoriginate_disabled.yfilter)) leaf_name_data.push_back(reoriginate_disabled.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());
    if (multicast_source_connected.is_set || is_set(multicast_source_connected.yfilter)) leaf_name_data.push_back(multicast_source_connected.get_name_leafdata());
    if (bgp_implicit_import_disabled.is_set || is_set(bgp_implicit_import_disabled.yfilter)) leaf_name_data.push_back(bgp_implicit_import_disabled.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "flow-label")
    {
        if(flow_label == nullptr)
        {
            flow_label = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::FlowLabel>();
        }
        return flow_label;
    }

    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured>();
        }
        return rd_configured;
    }

    if(child_yang_name == "rt-auto")
    {
        if(rt_auto == nullptr)
        {
            rt_auto = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto>();
        }
        return rt_auto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    if(flow_label != nullptr)
    {
        _children["flow-label"] = flow_label;
    }

    if(rd_auto != nullptr)
    {
        _children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        _children["rd-configured"] = rd_configured;
    }

    if(rt_auto != nullptr)
    {
        _children["rt-auto"] = rt_auto;
    }

    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
        evi_xr.value_namespace = name_space;
        evi_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-label")
    {
        unicast_label = value;
        unicast_label.value_namespace = name_space;
        unicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
        multicast_label.value_namespace = name_space;
        multicast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cw-disable")
    {
        cw_disable = value;
        cw_disable.value_namespace = name_space;
        cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
        table_policy_name.value_namespace = name_space;
        table_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-import-block-set")
    {
        rt_import_block_set = value;
        rt_import_block_set.value_namespace = name_space;
        rt_import_block_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-export-block-set")
    {
        rt_export_block_set = value;
        rt_export_block_set.value_namespace = name_space;
        rt_export_block_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-mac")
    {
        advertise_mac = value;
        advertise_mac.value_namespace = name_space;
        advertise_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etree-leaf")
    {
        etree_leaf = value;
        etree_leaf.value_namespace = name_space;
        etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-bvi-mac")
    {
        advertise_bvi_mac = value;
        advertise_bvi_mac.value_namespace = name_space;
        advertise_bvi_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aliasing-disabled")
    {
        aliasing_disabled = value;
        aliasing_disabled.value_namespace = name_space;
        aliasing_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoriginate-disabled")
    {
        reoriginate_disabled = value;
        reoriginate_disabled.value_namespace = name_space;
        reoriginate_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-source-connected")
    {
        multicast_source_connected = value;
        multicast_source_connected.value_namespace = name_space;
        multicast_source_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-implicit-import-disabled")
    {
        bgp_implicit_import_disabled = value;
        bgp_implicit_import_disabled.value_namespace = name_space;
        bgp_implicit_import_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "evi-xr")
    {
        evi_xr.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "unicast-label")
    {
        unicast_label.yfilter = yfilter;
    }
    if(value_path == "multicast-label")
    {
        multicast_label.yfilter = yfilter;
    }
    if(value_path == "cw-disable")
    {
        cw_disable.yfilter = yfilter;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "rt-import-block-set")
    {
        rt_import_block_set.yfilter = yfilter;
    }
    if(value_path == "rt-export-block-set")
    {
        rt_export_block_set.yfilter = yfilter;
    }
    if(value_path == "advertise-mac")
    {
        advertise_mac.yfilter = yfilter;
    }
    if(value_path == "etree-leaf")
    {
        etree_leaf.yfilter = yfilter;
    }
    if(value_path == "advertise-bvi-mac")
    {
        advertise_bvi_mac.yfilter = yfilter;
    }
    if(value_path == "aliasing-disabled")
    {
        aliasing_disabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "reoriginate-disabled")
    {
        reoriginate_disabled.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
    if(value_path == "multicast-source-connected")
    {
        multicast_source_connected.yfilter = yfilter;
    }
    if(value_path == "bgp-implicit-import-disabled")
    {
        bgp_implicit_import_disabled.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "flow-label" || name == "rd-auto" || name == "rd-configured" || name == "rt-auto" || name == "evi" || name == "encapsulation" || name == "evi-xr" || name == "encapsulation-xr" || name == "bd-name" || name == "type" || name == "description" || name == "unicast-label" || name == "multicast-label" || name == "cw-disable" || name == "table-policy-name" || name == "forward-class" || name == "rt-import-block-set" || name == "rt-export-block-set" || name == "advertise-mac" || name == "etree-leaf" || name == "advertise-bvi-mac" || name == "aliasing-disabled" || name == "unknown-unicast-flooding-disabled" || name == "reoriginate-disabled" || name == "stitching" || name == "multicast-source-connected" || name == "bgp-implicit-import-disabled" || name == "vrf-name")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::FlowLabel::FlowLabel()
    :
    static_flow_label{YType::boolean, "static-flow-label"},
    global_flow_label{YType::boolean, "global-flow-label"}
{

    yang_name = "flow-label"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::FlowLabel::~FlowLabel()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::FlowLabel::has_data() const
{
    if (is_presence_container) return true;
    return static_flow_label.is_set
	|| global_flow_label.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::FlowLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_flow_label.yfilter)
	|| ydk::is_set(global_flow_label.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_flow_label.is_set || is_set(static_flow_label.yfilter)) leaf_name_data.push_back(static_flow_label.get_name_leafdata());
    if (global_flow_label.is_set || is_set(global_flow_label.yfilter)) leaf_name_data.push_back(global_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::FlowLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static-flow-label")
    {
        static_flow_label = value;
        static_flow_label.value_namespace = name_space;
        static_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-flow-label")
    {
        global_flow_label = value;
        global_flow_label.value_namespace = name_space;
        global_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::FlowLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static-flow-label")
    {
        static_flow_label.yfilter = yfilter;
    }
    if(value_path == "global-flow-label")
    {
        global_flow_label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::FlowLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-flow-label" || name == "global-flow-label")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto>())
    , two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs>())
    , four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs>())
    , v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::~RdAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::~Auto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto>())
    , two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
    , four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
    , v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::~RdConfigured()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::~Auto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::RtAuto()
    :
    rt{YType::enumeration, "rt"}
        ,
    two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
    , four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>())
    , v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>())
    , es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "rt-auto"; yang_parent_name = "element"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_data() const
{
    if (is_presence_container) return true;
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        _children["es-import"] = es_import;
    }

    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rt-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rt-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rt-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "rt-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_data() const
{
    if (is_presence_container) return true;
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/element/rt-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EviChildren()
    :
    neighbors(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>())
    , ethernet_auto_discoveries(std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>())
    , inclusive_multicasts(std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>())
    , route_targets(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>())
    , macs(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>())
{
    neighbors->parent = this;
    ethernet_auto_discoveries->parent = this;
    inclusive_multicasts->parent = this;
    route_targets->parent = this;
    macs->parent = this;

    yang_name = "evi-children"; yang_parent_name = "evi-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data())
	|| (macs !=  nullptr && macs->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation())
	|| (macs !=  nullptr && macs->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-children";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "ethernet-auto-discoveries")
    {
        if(ethernet_auto_discoveries == nullptr)
        {
            ethernet_auto_discoveries = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>();
        }
        return ethernet_auto_discoveries;
    }

    if(child_yang_name == "inclusive-multicasts")
    {
        if(inclusive_multicasts == nullptr)
        {
            inclusive_multicasts = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>();
        }
        return inclusive_multicasts;
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>();
        }
        return route_targets;
    }

    if(child_yang_name == "macs")
    {
        if(macs == nullptr)
        {
            macs = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>();
        }
        return macs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(ethernet_auto_discoveries != nullptr)
    {
        _children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
    }

    if(inclusive_multicasts != nullptr)
    {
        _children["inclusive-multicasts"] = inclusive_multicasts;
    }

    if(route_targets != nullptr)
    {
        _children["route-targets"] = route_targets;
    }

    if(macs != nullptr)
    {
        _children["macs"] = macs;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "ethernet-auto-discoveries" || name == "inclusive-multicasts" || name == "route-targets" || name == "macs")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbors()
    :
    neighbor(this, {})
{

    yang_name = "neighbors"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::~Neighbors()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::Neighbor()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    neighbor_ip{YType::str, "neighbor-ip"},
    neighbor{YType::str, "neighbor"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance>())
    , leaf_evis(this, {})
{
    evpn_instance->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| neighbor_ip.is_set
	|| neighbor.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(neighbor_ip.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (neighbor_ip.is_set || is_set(neighbor_ip.yfilter)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "leaf-evis")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis>();
        ent_->parent = this;
        leaf_evis.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : leaf_evis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
        neighbor_ip.value_namespace = name_space;
        neighbor_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "leaf-evis" || name == "evi" || name == "encapsulation" || name == "neighbor-ip" || name == "neighbor")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/neighbors/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::LeafEvis()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "leaf-evis"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::~LeafEvis()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/neighbors/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-evis";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscoveries()
    :
    ethernet_auto_discovery(this, {})
{

    yang_name = "ethernet-auto-discoveries"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::~EthernetAutoDiscoveries()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_auto_discovery.len(); index++)
    {
        if(ethernet_auto_discovery[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_operation() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.len(); index++)
    {
        if(ethernet_auto_discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-auto-discovery")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery>();
        ent_->parent = this;
        ethernet_auto_discovery.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_auto_discovery.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-auto-discovery")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetAutoDiscovery()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    local_next_hop{YType::str, "local-next-hop"},
    local_label{YType::uint32, "local-label"},
    is_local_ead{YType::boolean, "is-local-ead"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"},
    num_paths{YType::uint32, "num-paths"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance>())
    , ethernet_segment_identifier(this, {})
    , path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "ethernet-auto-discovery"; yang_parent_name = "ethernet-auto-discoveries"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::~EthernetAutoDiscovery()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| local_next_hop.is_set
	|| local_label.is_set
	|| is_local_ead.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set
	|| num_paths.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(local_next_hop.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(is_local_ead.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discovery";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.yfilter)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.yfilter)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer>();
        ent_->parent = this;
        path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
        local_next_hop.value_namespace = name_space;
        local_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
        is_local_ead.value_namespace = name_space;
        is_local_ead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "ethernet-segment-identifier" || name == "path-buffer" || name == "evi" || name == "encapsulation" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "ethernet-tag-xr" || name == "local-next-hop" || name == "local-label" || name == "is-local-ead" || name == "redundancy-single-active" || name == "redundancy-single-flow-active" || name == "num-paths")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "ethernet-auto-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-auto-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::PathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "path-buffer"; yang_parent_name = "ethernet-auto-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticasts()
    :
    inclusive_multicast(this, {})
{

    yang_name = "inclusive-multicasts"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::~InclusiveMulticasts()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inclusive_multicast.len(); index++)
    {
        if(inclusive_multicast[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_operation() const
{
    for (std::size_t index=0; index<inclusive_multicast.len(); index++)
    {
        if(inclusive_multicast[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicasts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inclusive-multicast")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast>();
        ent_->parent = this;
        inclusive_multicast.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inclusive_multicast.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inclusive-multicast")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::InclusiveMulticast()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    originating_ip{YType::str, "originating-ip"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    pmsi_tunnel_type{YType::uint32, "pmsi-tunnel-type"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    is_local_entry{YType::boolean, "is-local-entry"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    srte_policy{YType::str, "srte-policy"},
    etree_leaf{YType::boolean, "etree-leaf"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance>())
{
    evpn_instance->parent = this;

    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| encapsulation.is_set
	|| ethernet_tag.is_set
	|| originating_ip.is_set
	|| ethernet_tag_xr.is_set
	|| originating_ip_xr.is_set
	|| tunnel_endpoint_id.is_set
	|| pmsi_tunnel_type.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| is_local_entry.is_set
	|| is_proxy_entry.is_set
	|| srte_policy.is_set
	|| etree_leaf.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(originating_ip.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(originating_ip_xr.yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(pmsi_tunnel_type.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(is_local_entry.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(srte_policy.yfilter)
	|| ydk::is_set(etree_leaf.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/inclusive-multicasts/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicast";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.yfilter)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.yfilter)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (pmsi_tunnel_type.is_set || is_set(pmsi_tunnel_type.yfilter)) leaf_name_data.push_back(pmsi_tunnel_type.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.yfilter)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (srte_policy.is_set || is_set(srte_policy.yfilter)) leaf_name_data.push_back(srte_policy.get_name_leafdata());
    if (etree_leaf.is_set || is_set(etree_leaf.yfilter)) leaf_name_data.push_back(etree_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance>();
        }
        return evpn_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
        originating_ip.value_namespace = name_space;
        originating_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
        originating_ip_xr.value_namespace = name_space;
        originating_ip_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-tunnel-type")
    {
        pmsi_tunnel_type = value;
        pmsi_tunnel_type.value_namespace = name_space;
        pmsi_tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry = value;
        is_local_entry.value_namespace = name_space;
        is_local_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry = value;
        is_proxy_entry.value_namespace = name_space;
        is_proxy_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-policy")
    {
        srte_policy = value;
        srte_policy.value_namespace = name_space;
        srte_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etree-leaf")
    {
        etree_leaf = value;
        etree_leaf.value_namespace = name_space;
        etree_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "originating-ip")
    {
        originating_ip.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "pmsi-tunnel-type")
    {
        pmsi_tunnel_type.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "srte-policy")
    {
        srte_policy.yfilter = yfilter;
    }
    if(value_path == "etree-leaf")
    {
        etree_leaf.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "evi" || name == "encapsulation" || name == "ethernet-tag" || name == "originating-ip" || name == "ethernet-tag-xr" || name == "originating-ip-xr" || name == "tunnel-endpoint-id" || name == "pmsi-tunnel-type" || name == "next-hop" || name == "output-label" || name == "is-local-entry" || name == "is-proxy-entry" || name == "srte-policy" || name == "etree-leaf")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "inclusive-multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/inclusive-multicasts/inclusive-multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTargets()
    :
    route_target(this, {})
{

    yang_name = "route-targets"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::~RouteTargets()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget>();
        ent_->parent = this;
        route_target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance>())
    , route_target(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>())
{
    evpn_instance->parent = this;
    route_target->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| encapsulation.is_set
	|| role.is_set
	|| format.is_set
	|| as.is_set
	|| as_index.is_set
	|| addr_index.is_set
	|| address.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(route_target_role.yfilter)
	|| ydk::is_set(route_target_stitching.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.yfilter)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.yfilter)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-role")
    {
        route_target_role = value;
        route_target_role.value_namespace = name_space;
        route_target_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching = value;
        route_target_stitching.value_namespace = name_space;
        route_target_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "route-target-role")
    {
        route_target_role.yfilter = yfilter;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "route-target" || name == "evi" || name == "encapsulation" || name == "role" || name == "format" || name == "as" || name == "as-index" || name == "addr-index" || name == "address" || name == "route-target-role" || name == "route-target-stitching")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
        ,
    two_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
    , four_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
    , v4_addr(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
    , es_import(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "route-target"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    if (is_presence_container) return true;
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        _children["es-import"] = es_import;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    if (is_presence_container) return true;
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Macs()
    :
    mac(this, {})
{

    yang_name = "macs"; yang_parent_name = "evi-children"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac>();
        ent_->parent = this;
        mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EviDetail::EviChildren::Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    mac_address{YType::str, "mac-address"},
    ip_address{YType::str, "ip-address"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    ip_address_xr{YType::str, "ip-address-xr"},
    local_label{YType::uint32, "local-label"},
    num_paths{YType::uint32, "num-paths"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_proxy_entry{YType::boolean, "is-proxy-entry"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    soo_nexthop{YType::str, "soo-nexthop"},
    ipnh_address{YType::str, "ipnh-address"},
    esi_port_key{YType::uint16, "esi-port-key"},
    local_encap_type{YType::uint8, "local-encap-type"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_seq_id{YType::uint32, "local-seq-id"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    local_l3_label{YType::uint32, "local-l3-label"},
    router_mac_address{YType::str, "router-mac-address"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    internal_label{YType::uint32, "internal-label"},
    resolved{YType::boolean, "resolved"},
    local_is_static{YType::boolean, "local-is-static"},
    remote_is_static{YType::boolean, "remote-is-static"},
    local_etree_leaf{YType::boolean, "local-etree-leaf"},
    remote_etree_leaf{YType::boolean, "remote-etree-leaf"},
    local_attachment_circuit_id{YType::uint32, "local-attachment-circuit-id"},
    remote_attachment_circuit_id{YType::uint32, "remote-attachment-circuit-id"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance>())
    , local_ethernet_segment_identifier(this, {})
    , remote_ethernet_segment_identifier(this, {})
    , path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "mac"; yang_parent_name = "macs"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_ethernet_segment_identifier.len(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.len(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| ethernet_tag.is_set
	|| mac_address.is_set
	|| ip_address.is_set
	|| ethernet_tag_xr.is_set
	|| mac_address_xr.is_set
	|| ip_address_xr.is_set
	|| local_label.is_set
	|| num_paths.is_set
	|| is_local_mac.is_set
	|| is_proxy_entry.is_set
	|| is_remote_mac.is_set
	|| soo_nexthop.is_set
	|| ipnh_address.is_set
	|| esi_port_key.is_set
	|| local_encap_type.is_set
	|| remote_encap_type.is_set
	|| learned_bridge_port_name.is_set
	|| local_seq_id.is_set
	|| remote_seq_id.is_set
	|| local_l3_label.is_set
	|| router_mac_address.is_set
	|| mac_flush_requested.is_set
	|| mac_flush_received.is_set
	|| internal_label.is_set
	|| resolved.is_set
	|| local_is_static.is_set
	|| remote_is_static.is_set
	|| local_etree_leaf.is_set
	|| remote_etree_leaf.is_set
	|| local_attachment_circuit_id.is_set
	|| remote_attachment_circuit_id.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<local_ethernet_segment_identifier.len(); index++)
    {
        if(local_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_ethernet_segment_identifier.len(); index++)
    {
        if(remote_ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_buffer.len(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ethernet_tag_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(ip_address_xr.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(num_paths.yfilter)
	|| ydk::is_set(is_local_mac.yfilter)
	|| ydk::is_set(is_proxy_entry.yfilter)
	|| ydk::is_set(is_remote_mac.yfilter)
	|| ydk::is_set(soo_nexthop.yfilter)
	|| ydk::is_set(ipnh_address.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(local_encap_type.yfilter)
	|| ydk::is_set(remote_encap_type.yfilter)
	|| ydk::is_set(learned_bridge_port_name.yfilter)
	|| ydk::is_set(local_seq_id.yfilter)
	|| ydk::is_set(remote_seq_id.yfilter)
	|| ydk::is_set(local_l3_label.yfilter)
	|| ydk::is_set(router_mac_address.yfilter)
	|| ydk::is_set(mac_flush_requested.yfilter)
	|| ydk::is_set(mac_flush_received.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(local_is_static.yfilter)
	|| ydk::is_set(remote_is_static.yfilter)
	|| ydk::is_set(local_etree_leaf.yfilter)
	|| ydk::is_set(remote_etree_leaf.yfilter)
	|| ydk::is_set(local_attachment_circuit_id.yfilter)
	|| ydk::is_set(remote_attachment_circuit_id.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.yfilter)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.yfilter)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.yfilter)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.yfilter)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_proxy_entry.is_set || is_set(is_proxy_entry.yfilter)) leaf_name_data.push_back(is_proxy_entry.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.yfilter)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.yfilter)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());
    if (ipnh_address.is_set || is_set(ipnh_address.yfilter)) leaf_name_data.push_back(ipnh_address.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.yfilter)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.yfilter)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.yfilter)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.yfilter)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.yfilter)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (local_l3_label.is_set || is_set(local_l3_label.yfilter)) leaf_name_data.push_back(local_l3_label.get_name_leafdata());
    if (router_mac_address.is_set || is_set(router_mac_address.yfilter)) leaf_name_data.push_back(router_mac_address.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.yfilter)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.yfilter)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (local_is_static.is_set || is_set(local_is_static.yfilter)) leaf_name_data.push_back(local_is_static.get_name_leafdata());
    if (remote_is_static.is_set || is_set(remote_is_static.yfilter)) leaf_name_data.push_back(remote_is_static.get_name_leafdata());
    if (local_etree_leaf.is_set || is_set(local_etree_leaf.yfilter)) leaf_name_data.push_back(local_etree_leaf.get_name_leafdata());
    if (remote_etree_leaf.is_set || is_set(remote_etree_leaf.yfilter)) leaf_name_data.push_back(remote_etree_leaf.get_name_leafdata());
    if (local_attachment_circuit_id.is_set || is_set(local_attachment_circuit_id.yfilter)) leaf_name_data.push_back(local_attachment_circuit_id.get_name_leafdata());
    if (remote_attachment_circuit_id.is_set || is_set(remote_attachment_circuit_id.yfilter)) leaf_name_data.push_back(remote_attachment_circuit_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "local-ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier>();
        ent_->parent = this;
        local_ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier>();
        ent_->parent = this;
        remote_ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        ent_->parent = this;
        path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : local_ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
        ethernet_tag_xr.value_namespace = name_space;
        ethernet_tag_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
        ip_address_xr.value_namespace = name_space;
        ip_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
        num_paths.value_namespace = name_space;
        num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
        is_local_mac.value_namespace = name_space;
        is_local_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry = value;
        is_proxy_entry.value_namespace = name_space;
        is_proxy_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
        is_remote_mac.value_namespace = name_space;
        is_remote_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
        soo_nexthop.value_namespace = name_space;
        soo_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address = value;
        ipnh_address.value_namespace = name_space;
        ipnh_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
        local_encap_type.value_namespace = name_space;
        local_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
        remote_encap_type.value_namespace = name_space;
        remote_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
        learned_bridge_port_name.value_namespace = name_space;
        learned_bridge_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
        local_seq_id.value_namespace = name_space;
        local_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
        remote_seq_id.value_namespace = name_space;
        remote_seq_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label = value;
        local_l3_label.value_namespace = name_space;
        local_l3_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address = value;
        router_mac_address.value_namespace = name_space;
        router_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
        mac_flush_requested.value_namespace = name_space;
        mac_flush_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
        mac_flush_received.value_namespace = name_space;
        mac_flush_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-is-static")
    {
        local_is_static = value;
        local_is_static.value_namespace = name_space;
        local_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static = value;
        remote_is_static.value_namespace = name_space;
        remote_is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-etree-leaf")
    {
        local_etree_leaf = value;
        local_etree_leaf.value_namespace = name_space;
        local_etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-etree-leaf")
    {
        remote_etree_leaf = value;
        remote_etree_leaf.value_namespace = name_space;
        remote_etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-attachment-circuit-id")
    {
        local_attachment_circuit_id = value;
        local_attachment_circuit_id.value_namespace = name_space;
        local_attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-attachment-circuit-id")
    {
        remote_attachment_circuit_id = value;
        remote_attachment_circuit_id.value_namespace = name_space;
        remote_attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "num-paths")
    {
        num_paths.yfilter = yfilter;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac.yfilter = yfilter;
    }
    if(value_path == "is-proxy-entry")
    {
        is_proxy_entry.yfilter = yfilter;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac.yfilter = yfilter;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop.yfilter = yfilter;
    }
    if(value_path == "ipnh-address")
    {
        ipnh_address.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type.yfilter = yfilter;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type.yfilter = yfilter;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name.yfilter = yfilter;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id.yfilter = yfilter;
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id.yfilter = yfilter;
    }
    if(value_path == "local-l3-label")
    {
        local_l3_label.yfilter = yfilter;
    }
    if(value_path == "router-mac-address")
    {
        router_mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested.yfilter = yfilter;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "local-is-static")
    {
        local_is_static.yfilter = yfilter;
    }
    if(value_path == "remote-is-static")
    {
        remote_is_static.yfilter = yfilter;
    }
    if(value_path == "local-etree-leaf")
    {
        local_etree_leaf.yfilter = yfilter;
    }
    if(value_path == "remote-etree-leaf")
    {
        remote_etree_leaf.yfilter = yfilter;
    }
    if(value_path == "local-attachment-circuit-id")
    {
        local_attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-attachment-circuit-id")
    {
        remote_attachment_circuit_id.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "local-ethernet-segment-identifier" || name == "remote-ethernet-segment-identifier" || name == "path-buffer" || name == "evi" || name == "encapsulation" || name == "ethernet-tag" || name == "mac-address" || name == "ip-address" || name == "ethernet-tag-xr" || name == "mac-address-xr" || name == "ip-address-xr" || name == "local-label" || name == "num-paths" || name == "is-local-mac" || name == "is-proxy-entry" || name == "is-remote-mac" || name == "soo-nexthop" || name == "ipnh-address" || name == "esi-port-key" || name == "local-encap-type" || name == "remote-encap-type" || name == "learned-bridge-port-name" || name == "local-seq-id" || name == "remote-seq-id" || name == "local-l3-label" || name == "router-mac-address" || name == "mac-flush-requested" || name == "mac-flush-received" || name == "internal-label" || name == "resolved" || name == "local-is-static" || name == "remote-is-static" || name == "local-etree-leaf" || name == "remote-etree-leaf" || name == "local-attachment-circuit-id" || name == "remote-attachment-circuit-id")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::LocalEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "local-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::~LocalEthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::RemoteEthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "remote-ethernet-segment-identifier"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::~RemoteEthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "path-buffer"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::Teps::Teps()
    :
    tep(this, {"tep_id"})
{

    yang_name = "teps"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Teps::~Teps()
{
}

bool Evpn::Standby::Teps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tep.len(); index++)
    {
        if(tep[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::Teps::has_operation() const
{
    for (std::size_t index=0; index<tep.len(); index++)
    {
        if(tep[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::Teps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Teps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tep")
    {
        auto ent_ = std::make_shared<Evpn::Standby::Teps::Tep>();
        ent_->parent = this;
        tep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::Teps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::Teps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::Teps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tep")
        return true;
    return false;
}

Evpn::Standby::Teps::Tep::Tep()
    :
    tep_id{YType::uint32, "tep-id"},
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    type{YType::uint8, "type"},
    use_count{YType::uint32, "use-count"},
    vrf_name{YType::str, "vrf-name"},
    vrf_table_id{YType::uint32, "vrf-table-id"},
    udp_port{YType::uint16, "udp-port"}
        ,
    local_info(std::make_shared<Evpn::Standby::Teps::Tep::LocalInfo>())
    , remote_info(std::make_shared<Evpn::Standby::Teps::Tep::RemoteInfo>())
{
    local_info->parent = this;
    remote_info->parent = this;

    yang_name = "tep"; yang_parent_name = "teps"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::Teps::Tep::~Tep()
{
}

bool Evpn::Standby::Teps::Tep::has_data() const
{
    if (is_presence_container) return true;
    return tep_id.is_set
	|| tunnel_endpoint_id.is_set
	|| type.is_set
	|| use_count.is_set
	|| vrf_name.is_set
	|| vrf_table_id.is_set
	|| udp_port.is_set
	|| (local_info !=  nullptr && local_info->has_data())
	|| (remote_info !=  nullptr && remote_info->has_data());
}

bool Evpn::Standby::Teps::Tep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tep_id.yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(use_count.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_table_id.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| (local_info !=  nullptr && local_info->has_operation())
	|| (remote_info !=  nullptr && remote_info->has_operation());
}

std::string Evpn::Standby::Teps::Tep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/teps/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::Teps::Tep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tep";
    ADD_KEY_TOKEN(tep_id, "tep-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::Tep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tep_id.is_set || is_set(tep_id.yfilter)) leaf_name_data.push_back(tep_id.get_name_leafdata());
    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (use_count.is_set || is_set(use_count.yfilter)) leaf_name_data.push_back(use_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_table_id.is_set || is_set(vrf_table_id.yfilter)) leaf_name_data.push_back(vrf_table_id.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::Tep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-info")
    {
        if(local_info == nullptr)
        {
            local_info = std::make_shared<Evpn::Standby::Teps::Tep::LocalInfo>();
        }
        return local_info;
    }

    if(child_yang_name == "remote-info")
    {
        if(remote_info == nullptr)
        {
            remote_info = std::make_shared<Evpn::Standby::Teps::Tep::RemoteInfo>();
        }
        return remote_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::Tep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_info != nullptr)
    {
        _children["local-info"] = local_info;
    }

    if(remote_info != nullptr)
    {
        _children["remote-info"] = remote_info;
    }

    return _children;
}

void Evpn::Standby::Teps::Tep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tep-id")
    {
        tep_id = value;
        tep_id.value_namespace = name_space;
        tep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-count")
    {
        use_count = value;
        use_count.value_namespace = name_space;
        use_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id = value;
        vrf_table_id.value_namespace = name_space;
        vrf_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Teps::Tep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tep-id")
    {
        tep_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "use-count")
    {
        use_count.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
}

bool Evpn::Standby::Teps::Tep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-info" || name == "remote-info" || name == "tep-id" || name == "tunnel-endpoint-id" || name == "type" || name == "use-count" || name == "vrf-name" || name == "vrf-table-id" || name == "udp-port")
        return true;
    return false;
}

Evpn::Standby::Teps::Tep::LocalInfo::LocalInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "local-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::Teps::Tep::LocalInfo::~LocalInfo()
{
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Standby::Teps::Tep::LocalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::Tep::LocalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::Tep::LocalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::Tep::LocalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Teps::Tep::LocalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Teps::Tep::LocalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Standby::Teps::Tep::LocalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Standby::Teps::Tep::RemoteInfo::RemoteInfo()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation{YType::uint8, "encapsulation"},
    ip{YType::str, "ip"}
{

    yang_name = "remote-info"; yang_parent_name = "tep"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::Standby::Teps::Tep::RemoteInfo::~RemoteInfo()
{
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation.is_set
	|| ip.is_set;
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Evpn::Standby::Teps::Tep::RemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::Teps::Tep::RemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::Teps::Tep::RemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::Teps::Tep::RemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::Teps::Tep::RemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::Teps::Tep::RemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Evpn::Standby::Teps::Tep::RemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation" || name == "ip")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabels()
    :
    internal_label(this, {})
{

    yang_name = "internal-labels"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::~InternalLabels()
{
}

bool Evpn::Standby::InternalLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::InternalLabels::has_operation() const
{
    for (std::size_t index=0; index<internal_label.len(); index++)
    {
        if(internal_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::InternalLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-label")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel>();
        ent_->parent = this;
        internal_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : internal_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::InternalLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::InternalLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::InternalLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-label")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::InternalLabel()
    :
    evi{YType::uint32, "evi"},
    encapsulation{YType::uint32, "encapsulation"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_tag{YType::uint32, "ethernet-tag"},
    esi{YType::str, "esi"},
    tag{YType::uint32, "tag"},
    internal_label{YType::uint32, "internal-label"},
    mac_num_paths{YType::uint32, "mac-num-paths"},
    ead_num_paths{YType::uint32, "ead-num-paths"},
    evi_num_paths{YType::uint32, "evi-num-paths"},
    sum_num_paths{YType::uint32, "sum-num-paths"},
    sum_num_active_paths{YType::uint32, "sum-num-active-paths"},
    resolved{YType::boolean, "resolved"},
    ecmp_disable{YType::boolean, "ecmp-disable"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"},
    redundancy_single_flow_active{YType::boolean, "redundancy-single-flow-active"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance>())
    , mac_path_buffer(this, {})
    , ead_path_buffer(this, {})
    , evi_path_buffer(this, {})
    , summary_path_buffer(this, {})
{
    evpn_instance->parent = this;

    yang_name = "internal-label"; yang_parent_name = "internal-labels"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::~InternalLabel()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_data())
            return true;
    }
    return evi.is_set
	|| encapsulation.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| esi.is_set
	|| tag.is_set
	|| internal_label.is_set
	|| mac_num_paths.is_set
	|| ead_num_paths.is_set
	|| evi_num_paths.is_set
	|| sum_num_paths.is_set
	|| sum_num_active_paths.is_set
	|| resolved.is_set
	|| ecmp_disable.is_set
	|| redundancy_single_active.is_set
	|| redundancy_single_flow_active.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_operation() const
{
    for (std::size_t index=0; index<mac_path_buffer.len(); index++)
    {
        if(mac_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ead_path_buffer.len(); index++)
    {
        if(ead_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evi_path_buffer.len(); index++)
    {
        if(evi_path_buffer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_path_buffer.len(); index++)
    {
        if(summary_path_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter)
	|| ydk::is_set(esi.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(mac_num_paths.yfilter)
	|| ydk::is_set(ead_num_paths.yfilter)
	|| ydk::is_set(evi_num_paths.yfilter)
	|| ydk::is_set(sum_num_paths.yfilter)
	|| ydk::is_set(sum_num_active_paths.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(ecmp_disable.yfilter)
	|| ydk::is_set(redundancy_single_active.yfilter)
	|| ydk::is_set(redundancy_single_flow_active.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (esi.is_set || is_set(esi.yfilter)) leaf_name_data.push_back(esi.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (mac_num_paths.is_set || is_set(mac_num_paths.yfilter)) leaf_name_data.push_back(mac_num_paths.get_name_leafdata());
    if (ead_num_paths.is_set || is_set(ead_num_paths.yfilter)) leaf_name_data.push_back(ead_num_paths.get_name_leafdata());
    if (evi_num_paths.is_set || is_set(evi_num_paths.yfilter)) leaf_name_data.push_back(evi_num_paths.get_name_leafdata());
    if (sum_num_paths.is_set || is_set(sum_num_paths.yfilter)) leaf_name_data.push_back(sum_num_paths.get_name_leafdata());
    if (sum_num_active_paths.is_set || is_set(sum_num_active_paths.yfilter)) leaf_name_data.push_back(sum_num_active_paths.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (ecmp_disable.is_set || is_set(ecmp_disable.yfilter)) leaf_name_data.push_back(ecmp_disable.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.yfilter)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());
    if (redundancy_single_flow_active.is_set || is_set(redundancy_single_flow_active.yfilter)) leaf_name_data.push_back(redundancy_single_flow_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "mac-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer>();
        ent_->parent = this;
        mac_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ead-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer>();
        ent_->parent = this;
        ead_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "evi-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer>();
        ent_->parent = this;
        evi_path_buffer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "summary-path-buffer")
    {
        auto ent_ = std::make_shared<Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer>();
        ent_->parent = this;
        summary_path_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : mac_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ead_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : evi_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : summary_path_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi")
    {
        esi = value;
        esi.value_namespace = name_space;
        esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths = value;
        mac_num_paths.value_namespace = name_space;
        mac_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths = value;
        ead_num_paths.value_namespace = name_space;
        ead_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths = value;
        evi_num_paths.value_namespace = name_space;
        evi_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths = value;
        sum_num_paths.value_namespace = name_space;
        sum_num_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths = value;
        sum_num_active_paths.value_namespace = name_space;
        sum_num_active_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable = value;
        ecmp_disable.value_namespace = name_space;
        ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
        redundancy_single_active.value_namespace = name_space;
        redundancy_single_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active = value;
        redundancy_single_flow_active.value_namespace = name_space;
        redundancy_single_flow_active.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
    if(value_path == "esi")
    {
        esi.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "mac-num-paths")
    {
        mac_num_paths.yfilter = yfilter;
    }
    if(value_path == "ead-num-paths")
    {
        ead_num_paths.yfilter = yfilter;
    }
    if(value_path == "evi-num-paths")
    {
        evi_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-paths")
    {
        sum_num_paths.yfilter = yfilter;
    }
    if(value_path == "sum-num-active-paths")
    {
        sum_num_active_paths.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "ecmp-disable")
    {
        ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active.yfilter = yfilter;
    }
    if(value_path == "redundancy-single-flow-active")
    {
        redundancy_single_flow_active.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "mac-path-buffer" || name == "ead-path-buffer" || name == "evi-path-buffer" || name == "summary-path-buffer" || name == "evi" || name == "encapsulation" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "ethernet-tag" || name == "esi" || name == "tag" || name == "internal-label" || name == "mac-num-paths" || name == "ead-num-paths" || name == "evi-num-paths" || name == "sum-num-paths" || name == "sum-num-active-paths" || name == "resolved" || name == "ecmp-disable" || name == "redundancy-single-active" || name == "redundancy-single-flow-active")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::MacPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "mac-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::~MacPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::EadPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "ead-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::~EadPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ead-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::EviPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "evi-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::~EviPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::SummaryPathBuffer()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"},
    srte_tunnel{YType::str, "srte-tunnel"}
{

    yang_name = "summary-path-buffer"; yang_parent_name = "internal-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::~SummaryPathBuffer()
{
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop.is_set
	|| output_label.is_set
	|| srte_tunnel.is_set;
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(srte_tunnel.yfilter);
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/internal-labels/internal-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-path-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (srte_tunnel.is_set || is_set(srte_tunnel.yfilter)) leaf_name_data.push_back(srte_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel = value;
        srte_tunnel.value_namespace = name_space;
        srte_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "srte-tunnel")
    {
        srte_tunnel.yfilter = yfilter;
    }
}

bool Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop" || name == "output-label" || name == "srte-tunnel")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegments()
    :
    ethernet_segment(this, {})
{

    yang_name = "ethernet-segments"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Standby::EthernetSegments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::EthernetSegments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::get_children() const
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

void Evpn::Standby::EthernetSegments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::EthernetSegments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::EthernetSegments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    interface_name{YType::str, "interface-name"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    esi_system_identifier{YType::str, "esi-system-identifier"},
    esi_port_key{YType::uint32, "esi-port-key"},
    esi_system_priority{YType::uint32, "esi-system-priority"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::enumeration, "ethernet-segment-state"},
    if_handle{YType::str, "if-handle"},
    main_port_role{YType::enumeration, "main-port-role"},
    main_port_mac{YType::str, "main-port-mac"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    force_single_home{YType::boolean, "force-single-home"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    carving_timer{YType::uint32, "carving-timer"},
    carving_timer_left{YType::uint32, "carving-timer-left"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    service_carving_mcast_mode{YType::enumeration, "service-carving-mcast-mode"},
    primary_services_input{YType::str, "primary-services-input"},
    secondary_services_input{YType::str, "secondary-services-input"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    permanent_forwarder_ports{YType::uint32, "permanent-forwarder-ports"},
    elected_forwarder_ports{YType::uint32, "elected-forwarder-ports"},
    not_elected_forwarder_ports{YType::uint32, "not-elected-forwarder-ports"},
    not_config_forwarder_ports{YType::uint32, "not-config-forwarder-ports"},
    mp_protected{YType::boolean, "mp-protected"},
    nve_anycast_vtep{YType::boolean, "nve-anycast-vtep"},
    nve_ingress_replication{YType::boolean, "nve-ingress-replication"},
    local_split_horizon_group_label_valid{YType::boolean, "local-split-horizon-group-label-valid"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"}
        ,
    ethernet_segment_identifier(this, {})
    , primary_service(this, {})
    , secondary_service(this, {})
    , service_carving_i_sidelected_result(this, {})
    , service_carving_isid_not_elected_result(this, {})
    , service_carving_evi_elected_result(this, {})
    , service_carving_evi_not_elected_result(this, {})
    , service_carving_vni_elected_result(this, {})
    , service_carving_vni_not_elected_result(this, {})
    , next_hop(this, {})
    , service_carving_vpws_permanent_result(this, {})
    , remote_split_horizon_group_label(this, {})
{

    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| esi_system_identifier.is_set
	|| esi_port_key.is_set
	|| esi_system_priority.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| if_handle.is_set
	|| main_port_role.is_set
	|| main_port_mac.is_set
	|| num_up_p_ws.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| mac_flushing_mode_config.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| force_single_home.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| carving_timer.is_set
	|| carving_timer_left.is_set
	|| service_carving_mode.is_set
	|| service_carving_mcast_mode.is_set
	|| primary_services_input.is_set
	|| secondary_services_input.is_set
	|| forwarder_ports.is_set
	|| permanent_forwarder_ports.is_set
	|| elected_forwarder_ports.is_set
	|| not_elected_forwarder_ports.is_set
	|| not_config_forwarder_ports.is_set
	|| mp_protected.is_set
	|| nve_anycast_vtep.is_set
	|| nve_ingress_replication.is_set
	|| local_split_horizon_group_label_valid.is_set
	|| local_split_horizon_group_label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment_identifier.len(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<primary_service.len(); index++)
    {
        if(primary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_service.len(); index++)
    {
        if(secondary_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_i_sidelected_result.len(); index++)
    {
        if(service_carving_i_sidelected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_isid_not_elected_result.len(); index++)
    {
        if(service_carving_isid_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_elected_result.len(); index++)
    {
        if(service_carving_evi_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_evi_not_elected_result.len(); index++)
    {
        if(service_carving_evi_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_elected_result.len(); index++)
    {
        if(service_carving_vni_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vni_not_elected_result.len(); index++)
    {
        if(service_carving_vni_not_elected_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_carving_vpws_permanent_result.len(); index++)
    {
        if(service_carving_vpws_permanent_result[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.len(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(esi1.yfilter)
	|| ydk::is_set(esi2.yfilter)
	|| ydk::is_set(esi3.yfilter)
	|| ydk::is_set(esi4.yfilter)
	|| ydk::is_set(esi5.yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(esi_system_identifier.yfilter)
	|| ydk::is_set(esi_port_key.yfilter)
	|| ydk::is_set(esi_system_priority.yfilter)
	|| ydk::is_set(ethernet_segment_name.yfilter)
	|| ydk::is_set(ethernet_segment_state.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(main_port_role.yfilter)
	|| ydk::is_set(main_port_mac.yfilter)
	|| ydk::is_set(num_up_p_ws.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(rt_origin.yfilter)
	|| ydk::is_set(es_bgp_gates.yfilter)
	|| ydk::is_set(es_l2fib_gates.yfilter)
	|| ydk::is_set(mac_flushing_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_config.yfilter)
	|| ydk::is_set(load_balance_mode_is_default.yfilter)
	|| ydk::is_set(load_balance_mode_oper.yfilter)
	|| ydk::is_set(force_single_home.yfilter)
	|| ydk::is_set(source_mac_oper.yfilter)
	|| ydk::is_set(source_mac_origin.yfilter)
	|| ydk::is_set(peering_timer.yfilter)
	|| ydk::is_set(peering_timer_left.yfilter)
	|| ydk::is_set(recovery_timer.yfilter)
	|| ydk::is_set(recovery_timer_left.yfilter)
	|| ydk::is_set(carving_timer.yfilter)
	|| ydk::is_set(carving_timer_left.yfilter)
	|| ydk::is_set(service_carving_mode.yfilter)
	|| ydk::is_set(service_carving_mcast_mode.yfilter)
	|| ydk::is_set(primary_services_input.yfilter)
	|| ydk::is_set(secondary_services_input.yfilter)
	|| ydk::is_set(forwarder_ports.yfilter)
	|| ydk::is_set(permanent_forwarder_ports.yfilter)
	|| ydk::is_set(elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_elected_forwarder_ports.yfilter)
	|| ydk::is_set(not_config_forwarder_ports.yfilter)
	|| ydk::is_set(mp_protected.yfilter)
	|| ydk::is_set(nve_anycast_vtep.yfilter)
	|| ydk::is_set(nve_ingress_replication.yfilter)
	|| ydk::is_set(local_split_horizon_group_label_valid.yfilter)
	|| ydk::is_set(local_split_horizon_group_label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.yfilter)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.yfilter)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.yfilter)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.yfilter)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.yfilter)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (esi_system_identifier.is_set || is_set(esi_system_identifier.yfilter)) leaf_name_data.push_back(esi_system_identifier.get_name_leafdata());
    if (esi_port_key.is_set || is_set(esi_port_key.yfilter)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (esi_system_priority.is_set || is_set(esi_system_priority.yfilter)) leaf_name_data.push_back(esi_system_priority.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.yfilter)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.yfilter)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.yfilter)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.yfilter)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.yfilter)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.yfilter)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.yfilter)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.yfilter)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.yfilter)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.yfilter)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.yfilter)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.yfilter)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.yfilter)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.yfilter)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.yfilter)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.yfilter)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.yfilter)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.yfilter)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.yfilter)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (carving_timer.is_set || is_set(carving_timer.yfilter)) leaf_name_data.push_back(carving_timer.get_name_leafdata());
    if (carving_timer_left.is_set || is_set(carving_timer_left.yfilter)) leaf_name_data.push_back(carving_timer_left.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.yfilter)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (service_carving_mcast_mode.is_set || is_set(service_carving_mcast_mode.yfilter)) leaf_name_data.push_back(service_carving_mcast_mode.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.yfilter)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.yfilter)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.yfilter)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (permanent_forwarder_ports.is_set || is_set(permanent_forwarder_ports.yfilter)) leaf_name_data.push_back(permanent_forwarder_ports.get_name_leafdata());
    if (elected_forwarder_ports.is_set || is_set(elected_forwarder_ports.yfilter)) leaf_name_data.push_back(elected_forwarder_ports.get_name_leafdata());
    if (not_elected_forwarder_ports.is_set || is_set(not_elected_forwarder_ports.yfilter)) leaf_name_data.push_back(not_elected_forwarder_ports.get_name_leafdata());
    if (not_config_forwarder_ports.is_set || is_set(not_config_forwarder_ports.yfilter)) leaf_name_data.push_back(not_config_forwarder_ports.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.yfilter)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (nve_anycast_vtep.is_set || is_set(nve_anycast_vtep.yfilter)) leaf_name_data.push_back(nve_anycast_vtep.get_name_leafdata());
    if (nve_ingress_replication.is_set || is_set(nve_ingress_replication.yfilter)) leaf_name_data.push_back(nve_ingress_replication.get_name_leafdata());
    if (local_split_horizon_group_label_valid.is_set || is_set(local_split_horizon_group_label_valid.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label_valid.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.yfilter)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-identifier")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier>();
        ent_->parent = this;
        ethernet_segment_identifier.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary-service")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService>();
        ent_->parent = this;
        primary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "secondary-service")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService>();
        ent_->parent = this;
        secondary_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-i-sidelected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult>();
        ent_->parent = this;
        service_carving_i_sidelected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-isid-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult>();
        ent_->parent = this;
        service_carving_isid_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult>();
        ent_->parent = this;
        service_carving_evi_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-evi-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult>();
        ent_->parent = this;
        service_carving_evi_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult>();
        ent_->parent = this;
        service_carving_vni_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vni-not-elected-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult>();
        ent_->parent = this;
        service_carving_vni_not_elected_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-carving-vpws-permanent-result")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult>();
        ent_->parent = this;
        service_carving_vpws_permanent_result.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        auto ent_ = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        ent_->parent = this;
        remote_split_horizon_group_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment_identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : primary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : secondary_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_i_sidelected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_isid_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_evi_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vni_not_elected_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_carving_vpws_permanent_result.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_split_horizon_group_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
        esi1.value_namespace = name_space;
        esi1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
        esi2.value_namespace = name_space;
        esi2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
        esi3.value_namespace = name_space;
        esi3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
        esi4.value_namespace = name_space;
        esi4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
        esi5.value_namespace = name_space;
        esi5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier = value;
        esi_system_identifier.value_namespace = name_space;
        esi_system_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
        esi_port_key.value_namespace = name_space;
        esi_port_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority = value;
        esi_system_priority.value_namespace = name_space;
        esi_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
        ethernet_segment_name.value_namespace = name_space;
        ethernet_segment_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
        ethernet_segment_state.value_namespace = name_space;
        ethernet_segment_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
        main_port_role.value_namespace = name_space;
        main_port_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
        main_port_mac.value_namespace = name_space;
        main_port_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
        num_up_p_ws.value_namespace = name_space;
        num_up_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
        rt_origin.value_namespace = name_space;
        rt_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
        es_bgp_gates.value_namespace = name_space;
        es_bgp_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
        es_l2fib_gates.value_namespace = name_space;
        es_l2fib_gates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
        mac_flushing_mode_config.value_namespace = name_space;
        mac_flushing_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
        load_balance_mode_config.value_namespace = name_space;
        load_balance_mode_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
        load_balance_mode_is_default.value_namespace = name_space;
        load_balance_mode_is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
        load_balance_mode_oper.value_namespace = name_space;
        load_balance_mode_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
        force_single_home.value_namespace = name_space;
        force_single_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
        source_mac_oper.value_namespace = name_space;
        source_mac_oper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
        source_mac_origin.value_namespace = name_space;
        source_mac_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
        peering_timer.value_namespace = name_space;
        peering_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
        peering_timer_left.value_namespace = name_space;
        peering_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
        recovery_timer.value_namespace = name_space;
        recovery_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
        recovery_timer_left.value_namespace = name_space;
        recovery_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer")
    {
        carving_timer = value;
        carving_timer.value_namespace = name_space;
        carving_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left = value;
        carving_timer_left.value_namespace = name_space;
        carving_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
        service_carving_mode.value_namespace = name_space;
        service_carving_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-carving-mcast-mode")
    {
        service_carving_mcast_mode = value;
        service_carving_mcast_mode.value_namespace = name_space;
        service_carving_mcast_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
        primary_services_input.value_namespace = name_space;
        primary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
        secondary_services_input.value_namespace = name_space;
        secondary_services_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
        forwarder_ports.value_namespace = name_space;
        forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports = value;
        permanent_forwarder_ports.value_namespace = name_space;
        permanent_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports = value;
        elected_forwarder_ports.value_namespace = name_space;
        elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports = value;
        not_elected_forwarder_ports.value_namespace = name_space;
        not_elected_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports = value;
        not_config_forwarder_ports.value_namespace = name_space;
        not_config_forwarder_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
        mp_protected.value_namespace = name_space;
        mp_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep = value;
        nve_anycast_vtep.value_namespace = name_space;
        nve_anycast_vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication = value;
        nve_ingress_replication.value_namespace = name_space;
        nve_ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid = value;
        local_split_horizon_group_label_valid.value_namespace = name_space;
        local_split_horizon_group_label_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
        local_split_horizon_group_label.value_namespace = name_space;
        local_split_horizon_group_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "esi1")
    {
        esi1.yfilter = yfilter;
    }
    if(value_path == "esi2")
    {
        esi2.yfilter = yfilter;
    }
    if(value_path == "esi3")
    {
        esi3.yfilter = yfilter;
    }
    if(value_path == "esi4")
    {
        esi4.yfilter = yfilter;
    }
    if(value_path == "esi5")
    {
        esi5.yfilter = yfilter;
    }
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "esi-system-identifier")
    {
        esi_system_identifier.yfilter = yfilter;
    }
    if(value_path == "esi-port-key")
    {
        esi_port_key.yfilter = yfilter;
    }
    if(value_path == "esi-system-priority")
    {
        esi_system_priority.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name.yfilter = yfilter;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "main-port-role")
    {
        main_port_role.yfilter = yfilter;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac.yfilter = yfilter;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "rt-origin")
    {
        rt_origin.yfilter = yfilter;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates.yfilter = yfilter;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates.yfilter = yfilter;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default.yfilter = yfilter;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper.yfilter = yfilter;
    }
    if(value_path == "force-single-home")
    {
        force_single_home.yfilter = yfilter;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper.yfilter = yfilter;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin.yfilter = yfilter;
    }
    if(value_path == "peering-timer")
    {
        peering_timer.yfilter = yfilter;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left.yfilter = yfilter;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer.yfilter = yfilter;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left.yfilter = yfilter;
    }
    if(value_path == "carving-timer")
    {
        carving_timer.yfilter = yfilter;
    }
    if(value_path == "carving-timer-left")
    {
        carving_timer_left.yfilter = yfilter;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode.yfilter = yfilter;
    }
    if(value_path == "service-carving-mcast-mode")
    {
        service_carving_mcast_mode.yfilter = yfilter;
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input.yfilter = yfilter;
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input.yfilter = yfilter;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "permanent-forwarder-ports")
    {
        permanent_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "elected-forwarder-ports")
    {
        elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-elected-forwarder-ports")
    {
        not_elected_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "not-config-forwarder-ports")
    {
        not_config_forwarder_ports.yfilter = yfilter;
    }
    if(value_path == "mp-protected")
    {
        mp_protected.yfilter = yfilter;
    }
    if(value_path == "nve-anycast-vtep")
    {
        nve_anycast_vtep.yfilter = yfilter;
    }
    if(value_path == "nve-ingress-replication")
    {
        nve_ingress_replication.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label-valid")
    {
        local_split_horizon_group_label_valid.yfilter = yfilter;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-identifier" || name == "primary-service" || name == "secondary-service" || name == "service-carving-i-sidelected-result" || name == "service-carving-isid-not-elected-result" || name == "service-carving-evi-elected-result" || name == "service-carving-evi-not-elected-result" || name == "service-carving-vni-elected-result" || name == "service-carving-vni-not-elected-result" || name == "next-hop" || name == "service-carving-vpws-permanent-result" || name == "remote-split-horizon-group-label" || name == "interface-name" || name == "esi1" || name == "esi2" || name == "esi3" || name == "esi4" || name == "esi5" || name == "esi-type" || name == "esi-system-identifier" || name == "esi-port-key" || name == "esi-system-priority" || name == "ethernet-segment-name" || name == "ethernet-segment-state" || name == "if-handle" || name == "main-port-role" || name == "main-port-mac" || name == "num-up-p-ws" || name == "route-target" || name == "rt-origin" || name == "es-bgp-gates" || name == "es-l2fib-gates" || name == "mac-flushing-mode-config" || name == "load-balance-mode-config" || name == "load-balance-mode-is-default" || name == "load-balance-mode-oper" || name == "force-single-home" || name == "source-mac-oper" || name == "source-mac-origin" || name == "peering-timer" || name == "peering-timer-left" || name == "recovery-timer" || name == "recovery-timer-left" || name == "carving-timer" || name == "carving-timer-left" || name == "service-carving-mode" || name == "service-carving-mcast-mode" || name == "primary-services-input" || name == "secondary-services-input" || name == "forwarder-ports" || name == "permanent-forwarder-ports" || name == "elected-forwarder-ports" || name == "not-elected-forwarder-ports" || name == "not-config-forwarder-ports" || name == "mp-protected" || name == "nve-anycast-vtep" || name == "nve-ingress-replication" || name == "local-split-horizon-group-label-valid" || name == "local-split-horizon-group-label")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::PrimaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "primary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::~PrimaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-service";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::SecondaryService()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "secondary-service"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::~SecondaryService()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-service";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::ServiceCarvingISidelectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-i-sidelected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::~ServiceCarvingISidelectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-i-sidelected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::ServiceCarvingIsidNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-isid-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::~ServiceCarvingIsidNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-isid-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::ServiceCarvingEviElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::~ServiceCarvingEviElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::ServiceCarvingEviNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-evi-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::~ServiceCarvingEviNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-evi-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::ServiceCarvingVniElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::~ServiceCarvingVniElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::ServiceCarvingVniNotElectedResult()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "service-carving-vni-not-elected-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::~ServiceCarvingVniNotElectedResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vni-not-elected-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"},
    df_dont_prempt{YType::boolean, "df-dont-prempt"},
    df_type{YType::uint8, "df-type"},
    df_pref{YType::uint16, "df-pref"}
{

    yang_name = "next-hop"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| df_dont_prempt.is_set
	|| df_type.is_set
	|| df_pref.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(df_dont_prempt.yfilter)
	|| ydk::is_set(df_type.yfilter)
	|| ydk::is_set(df_pref.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (df_dont_prempt.is_set || is_set(df_dont_prempt.yfilter)) leaf_name_data.push_back(df_dont_prempt.get_name_leafdata());
    if (df_type.is_set || is_set(df_type.yfilter)) leaf_name_data.push_back(df_type.get_name_leafdata());
    if (df_pref.is_set || is_set(df_pref.yfilter)) leaf_name_data.push_back(df_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt = value;
        df_dont_prempt.value_namespace = name_space;
        df_dont_prempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-type")
    {
        df_type = value;
        df_type.value_namespace = name_space;
        df_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-pref")
    {
        df_pref = value;
        df_pref.value_namespace = name_space;
        df_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "df-dont-prempt")
    {
        df_dont_prempt.yfilter = yfilter;
    }
    if(value_path == "df-type")
    {
        df_type.yfilter = yfilter;
    }
    if(value_path == "df-pref")
    {
        df_pref.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "df-dont-prempt" || name == "df-type" || name == "df-pref")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::ServiceCarvingVpwsPermanentResult()
    :
    vpn_id{YType::uint32, "vpn-id"},
    type{YType::enumeration, "type"},
    ethernet_tag{YType::uint32, "ethernet-tag"}
{

    yang_name = "service-carving-vpws-permanent-result"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::~ServiceCarvingVpwsPermanentResult()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set
	|| type.is_set
	|| ethernet_tag.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ethernet_tag.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-carving-vpws-permanent-result";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.yfilter)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
        ethernet_tag.value_namespace = name_space;
        ethernet_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "type" || name == "ethernet-tag")
        return true;
    return false;
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    next_hop{YType::str, "next-hop"},
    label{YType::uint32, "label"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set
	|| label.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "label")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcIds()
    :
    ac_id(this, {})
{

    yang_name = "ac-ids"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::~AcIds()
{
}

bool Evpn::Standby::AcIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.len(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::Standby::AcIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-id")
    {
        auto ent_ = std::make_shared<Evpn::Standby::AcIds::AcId>();
        ent_->parent = this;
        ac_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ac_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::AcIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::Standby::AcIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::Standby::AcIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-id")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::AcId()
    :
    evi{YType::uint32, "evi"},
    ac_id{YType::uint32, "ac-id"},
    neighbor{YType::str, "neighbor"}
        ,
    evpn_instance(std::make_shared<Evpn::Standby::AcIds::AcId::EvpnInstance>())
    , leaf_evis(this, {})
{
    evpn_instance->parent = this;

    yang_name = "ac-id"; yang_parent_name = "ac-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::AcId::~AcId()
{
}

bool Evpn::Standby::AcIds::AcId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_data())
            return true;
    }
    return evi.is_set
	|| ac_id.is_set
	|| neighbor.is_set
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Evpn::Standby::AcIds::AcId::has_operation() const
{
    for (std::size_t index=0; index<leaf_evis.len(); index++)
    {
        if(leaf_evis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Evpn::Standby::AcIds::AcId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Evpn::Standby::AcIds::AcId::EvpnInstance>();
        }
        return evpn_instance;
    }

    if(child_yang_name == "leaf-evis")
    {
        auto ent_ = std::make_shared<Evpn::Standby::AcIds::AcId::LeafEvis>();
        ent_->parent = this;
        leaf_evis.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::AcId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    count_ = 0;
    for (auto ent_ : leaf_evis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Evpn::Standby::AcIds::AcId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::AcIds::AcId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance" || name == "leaf-evis" || name == "evi" || name == "ac-id" || name == "neighbor")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::EvpnInstance::EvpnInstance()
    :
    ethernet_vpn_id{YType::uint32, "ethernet-vpn-id"},
    encapsulation_xr{YType::uint8, "encapsulation-xr"},
    bd_name{YType::str, "bd-name"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-instance"; yang_parent_name = "ac-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::AcId::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_vpn_id.is_set
	|| encapsulation_xr.is_set
	|| bd_name.is_set
	|| type.is_set;
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_vpn_id.yfilter)
	|| ydk::is_set(encapsulation_xr.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::Standby::AcIds::AcId::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/ac-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_vpn_id.is_set || is_set(ethernet_vpn_id.yfilter)) leaf_name_data.push_back(ethernet_vpn_id.get_name_leafdata());
    if (encapsulation_xr.is_set || is_set(encapsulation_xr.yfilter)) leaf_name_data.push_back(encapsulation_xr.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::AcId::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::AcId::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::AcIds::AcId::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id = value;
        ethernet_vpn_id.value_namespace = name_space;
        ethernet_vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr = value;
        encapsulation_xr.value_namespace = name_space;
        encapsulation_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::AcIds::AcId::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-vpn-id")
    {
        ethernet_vpn_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation-xr")
    {
        encapsulation_xr.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-vpn-id" || name == "encapsulation-xr" || name == "bd-name" || name == "type")
        return true;
    return false;
}

Evpn::Standby::AcIds::AcId::LeafEvis::LeafEvis()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "leaf-evis"; yang_parent_name = "ac-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::Standby::AcIds::AcId::LeafEvis::~LeafEvis()
{
}

bool Evpn::Standby::AcIds::AcId::LeafEvis::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Evpn::Standby::AcIds::AcId::LeafEvis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Evpn::Standby::AcIds::AcId::LeafEvis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/ac-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::Standby::AcIds::AcId::LeafEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-evis";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::Standby::AcIds::AcId::LeafEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Evpn::Standby::AcIds::AcId::LeafEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Evpn::Standby::AcIds::AcId::LeafEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Evpn::Standby::AcIds::AcId::LeafEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::Standby::AcIds::AcId::LeafEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Evpn::Standby::AcIds::AcId::LeafEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

